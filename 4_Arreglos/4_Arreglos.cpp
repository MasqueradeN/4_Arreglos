﻿#include <iostream>
#include <Windows.h>
#include <iomanip>


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    std::cout << u8"El niño y el pingüino ⚱️☠️  🌈  👈🗿👈\n";
    std::cout << "Esto es un arroba \x40 \n";
    std::cout << "Esto es un kanji: \xE9\x9B\xBB \n";
    std::cout << "Esto es un emoji: \xF0\x9F\x91\x80 \n";

    std::cout << "Emojis del F09F9200 al F09F92FF\n";
    char bytes[5] = "\xF0\x9F\x92\x80";
    std::cout << bytes << "\n";


    for (int i = 0; i <= 0xF; i++)
    {
        for (int j = 0; j <= 0xF; j++)
        {
            for (int c = 0; c < 5; c++)
            {
                std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(static_cast<unsigned char>(bytes[c]));
            }
            std::cout << "\n";
            bytes[3] += 1;
            std::cout << bytes << "\n";
        }
        std::cout << "\n";
    }

    for (int i = 0; i <= 0xF; i++)
    {
        for (int j = 0; j <= 0xF; j++)
        {
            std::cout << std::hex << bytes << " ";
            bytes[3] += 1;
        }
        std::cout << "\n";
    }
}