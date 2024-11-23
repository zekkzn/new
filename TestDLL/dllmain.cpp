#include <Windows.h>
#include <thread>
#include <iostream>
#include <fstream>
#include <chrono>
#include "pch.h"
#include "ConsoleUtils.hpp"
#include "Logger.hpp"

// Forward declarations
void StartESP();
void Log(const std::string& message);

// Global variable to control unhooking
bool g_UnhookRequested = false;

// Self-destruct function to cleanly unload the DLL
void SelfDestruct(HMODULE hModule) {
    Log("[SelfDestruct] Cleaning up and unloading DLL...");
    CleanupConsole();
    FreeLibraryAndExitThread(hModule, 0);
}

// Main thread entry point
DWORD WINAPI MainThread(LPVOID lpParam) {
    HMODULE hModule = static_cast<HMODULE>(lpParam);

    // Initialize the console for debugging
    InitializeConsole();
    Log("[MainThread] DLL injected. Main thread started.");

    try {
        // Start the ESP functionality
        Log("[MainThread] Starting ESP...");
        StartESP();
        Log("[MainThread] ESP started successfully.");
    }
    catch (const std::exception& ex) {
        Log(std::string("[MainThread] Exception during ESP initialization: ") + ex.what());
        SelfDestruct(hModule);
        return 1;
    }
    catch (...) {
        Log("[MainThread] Unknown exception during ESP initialization.");
        SelfDestruct(hModule);
        return 1;
    }

    // Keep the thread alive and handle unhook requests
    while (!g_UnhookRequested) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    // Clean up and unload the DLL
    Log("[MainThread] Unhook requested. Cleaning up...");
    CleanupConsole();
    SelfDestruct(hModule);

    return 0;
}

// DLL entry point
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);

        // Start the main thread for ESP logic and debugging
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    }
    return TRUE;
}

// Logging function
void Log(const std::string& message) {
    std::ofstream logFile("esp_debug.log", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[" << std::chrono::system_clock::to_time_t(std::chrono::system_clock::now())
            << "] " << message << std::endl;
        logFile.close();
    }
    std::cout << message << std::endl; // Also print to the debug console
}
