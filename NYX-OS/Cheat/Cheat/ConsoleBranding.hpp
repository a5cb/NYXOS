#pragma once
#include <windows.h>
#include <cstdio>
#include "Brand.hpp"
REVERS_STAMP(ConsoleBranding_hpp)
#include "ConsoleIcon.hpp"

namespace ConsoleBranding
{
    inline void Enable()
    {
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        DWORD mode = 0;
        if (hOut != INVALID_HANDLE_VALUE && GetConsoleMode(hOut, &mode))
            SetConsoleMode(hOut, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

        SetConsoleTitleA(globals::brand::consoleTitle);
        ConsoleIcon::ApplyToConsole();
    }

    inline void Line(const char* text)
    {
        printf("\033[38;5;99m%s\033[0m\n", text);
    }

    inline void Status(const char* label, const char* value)
    {
        printf("\033[38;5;245m  [%s] \033[38;5;141m%s\033[0m\n", label, value);
    }

    inline void Banner()
    {
        Enable();
        printf("\n");
        printf("\033[38;5;99m  ================================================\033[0m\n");
        printf("\033[38;5;141m\n");
        printf("    ##  ##  ##  ##  ##   ##        #####    ####  \n");
        printf("    ###  #  ##  ##   ## ##        ##   ##  ##     \n");
        printf("    ## # #  ##  ##    ###         ##   ##   ####  \n");
        printf("    ##  ##   ####    ## ##         ##   ##      ## \n");
        printf("    ##  ##    ##    ##   ##         #####   #####  \n");
        printf("\033[0m\n");
        printf("\033[38;5;99m  ================================================\033[0m\n");
        printf("\033[38;5;141m  %s\033[0m\n", globals::brand::fullTitle);
        printf("\033[38;5;245m  %s\033[0m\n", globals::brand::createdBy);
        printf("\n");
    }

    inline void WaitingForTarget()
    {
        Line("  [*] Waiting for FiveM (GTAProcess.exe)...");
    }

    inline void FoundTarget(DWORD pid)
    {
        printf("\033[38;5;141m  [+] FiveM found  \033[38;5;245mPID: \033[38;5;99m%lu\033[0m\n", pid);
    }

    inline void Attaching()
    {
        Line("  [*] Attaching...");
    }

    inline void Attached(const char* version)
    {
        printf("\033[38;5;141m  [+] Attached successfully\033[0m\n");
        Status("Build",   version);
        Status("Product", globals::brand::signature);
        Status("Version", globals::brand::version);
        printf("\n");
        printf("\033[38;5;99m  [+] Press INSERT to open menu\033[0m\n");
        printf("\033[38;5;245m  [+] Press F10 to exit\033[0m\n\n");
    }

    inline void Failed(const char* reason)
    {
        printf("\033[38;5;203m  [!] FAILED: %s\033[0m\n", reason);
    }
}
