//Author: Elin
//Date: 2023-01-09 18:32:34
//Last Modified by:   Elin 
//Last Modified time: 2023-01-09 18:32:34 

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#pragma comment(lib, "Winmm.lib")

void linda_h(void)
{
    printf("Shot on iPhone\n");
    Sleep(2000);
    system("cls");
    printf(" _     _           _         _      \n");
    printf("| |   (_)_ __   __| | __ _  | |__   \n");
    printf("| |   | | '_ \\ / _` |/ _` | | '_ \\  \n");
    printf("| |___| | | | | (_| | (_| |_| | | | \n");
    printf("|_____|_|_| |_|\\__,_|\\__,_(_)_| |_| \n");
    PlaySound(TEXT("LindaH.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Sleep(7000);
}