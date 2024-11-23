#include "pch.h"
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include "SDK.hpp"
#include "Logger.hpp"

// Global variables
SDK::UWorld* GlobalWorld = nullptr;
SDK::AGameStateBase* GlobalGameState = nullptr;
SDK::UCharacterCollection* GlobalCharacterCollection = nullptr;

std::mutex dataMutex;

struct PlayerData {
    SDK::FVector position;
    bool isKiller;
};

std::vector<PlayerData> playerPositions;

// Function to retrieve HUD
SDK::AHUD* GetHUD() {
    Log("[Debug] Attempting to retrieve HUD...");

    if (!GlobalWorld) {
        Log("[Error] UWorld is not initialized!");
        return nullptr;
    }

    SDK::UGameInstance* gameInstance = GlobalWorld->OwningGameInstance;
    if (!gameInstance) {
        Log("[Error] GameInstance not found!");
        return nullptr;
    }

    if (gameInstance->LocalPlayers.Num() == 0) {
        Log("[Error] No LocalPlayers found!");
        return nullptr;
    }

    SDK::ULocalPlayer* localPlayer = gameInstance->LocalPlayers[0];
    if (!localPlayer || !localPlayer->PlayerController) {
        Log("[Error] LocalPlayer or PlayerController is null!");
        return nullptr;
    }

    SDK::APlayerController* playerController = localPlayer->PlayerController;
    Log("[Debug] PlayerController found: " + std::to_string(reinterpret_cast<uintptr_t>(playerController)));

    SDK::AHUD* hud = playerController->MyHUD;
    if (!hud) {
        Log("[Error] HUD not found!");
        return nullptr;
    }
    Log("[Debug] HUD found: " + std::to_string(reinterpret_cast<uintptr_t>(hud)));
    return hud;
}

// Function to hook HUD and log Canvas pointer
void HookAHUD(SDK::AHUD* hud) {
    if (!hud) {
        Log("[Error] HUD is null!");
        return;
    }

    SDK::UCanvas* canvas = hud->Canvas;
    if (!canvas) {
        Log("[Error] HUD Canvas is null!");
        return;
    }

    Log("[Debug] Canvas Pointer: " + std::to_string(reinterpret_cast<uintptr_t>(canvas)));
}

// Function to initialize game state
bool InitializeGameState() {
    Log("[Debug] Initializing game structures...");

    int retryCount = 0;
    const int maxRetries = 100;
    const int retryDelay = 100;

    while (retryCount < maxRetries) {
        GlobalWorld = SDK::UWorld::GetWorld();
        if (GlobalWorld) break;

        Log("[Error] UWorld not found! Retrying...");
        std::this_thread::sleep_for(std::chrono::milliseconds(retryDelay));
        retryCount++;
    }

    if (!GlobalWorld) {
        Log("[Error] UWorld could not be found after maximum retries!");
        return false;
    }

    Log("[Debug] UWorld found: " + std::to_string(reinterpret_cast<uintptr_t>(GlobalWorld)));

    GlobalGameState = static_cast<SDK::AGameStateBase*>(GlobalWorld->GameState);
    if (!GlobalGameState) {
        Log("[Error] GameState not found!");
        return false;
    }
    Log("[Debug] GameState found: " + std::to_string(reinterpret_cast<uintptr_t>(GlobalGameState)));

    SDK::ADBDGameState* DBDGameState = static_cast<SDK::ADBDGameState*>(GlobalGameState);
    if (!DBDGameState) {
        Log("[Error] Could not cast GameState to ADBDGameState!");
        return false;
    }

    GlobalCharacterCollection = DBDGameState->_characterCollection;
    if (!GlobalCharacterCollection) {
        Log("[Error] CharacterCollection not found!");
        return false;
    }
    Log("[Debug] CharacterCollection found.");
    return true;
}

// Function to update player positions
void UpdatePlayerPositions() {
    std::lock_guard<std::mutex> lock(dataMutex);

    playerPositions.clear();
    const SDK::TSet<SDK::ASlasherPlayer*>& Killers = GlobalCharacterCollection->GetKillers();
    const SDK::TSet<SDK::ACamperPlayer*>& Survivors = GlobalCharacterCollection->GetSurvivors();

    for (SDK::int32 i = 0; i < Killers.Num(); i++) {
        SDK::ASlasherPlayer* Killer = Killers[i];
        if (Killer && Killer->RootComponent) {
            playerPositions.push_back({ Killer->RootComponent->RelativeLocation, true });
        }
    }

    for (SDK::int32 i = 0; i < Survivors.Num(); i++) {
        SDK::ACamperPlayer* Survivor = Survivors[i];
        if (Survivor && Survivor->RootComponent) {
            playerPositions.push_back({ Survivor->RootComponent->RelativeLocation, false });

            

        }
    }
}

// ESP thread function
void ESPThread() {
    if (!InitializeGameState()) {
        Log("[Error] Failed to initialize game state.");
        return;
    }

    SDK::AHUD* hud = GetHUD();
    if (!hud) {
        Log("[Error] Failed to retrieve HUD!");
        return;
    }

    HookAHUD(hud);

    while (true) {
        UpdatePlayerPositions();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

// Start the ESP functionality
void StartESP() {
    std::thread(ESPThread).detach();
}
