/*
** EPITECH PROJECT, 2020
** FUN_imageCompressor_2019
** File description:
** creation
*/

#include "./Logs.hpp"

int main()
{
    logs::Logs logs("vectorsFile.txt");

    for (int x = 0; x < 255; x++) {
        std::string valX = std::to_string(x);
        for (int y = 0; y < 255; y++) {
            std::string valY = std::to_string(y);
            for (int z = 0; z < 255; z++) {
                std::string valZ = std::to_string(z);
                logs.file("(0,0) (" + valX + "," + valY + "," + valZ + ")");
            }
        }
    }
}