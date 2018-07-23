#include "stringHandler.h"
#include <iostream>

char getPlayAgainChar() {
    std::cout << "Would you like to play again (y/n)? ";
    char theChar{'0'};
    std::cin >> theChar;
    return theChar;
}

bool isTypeY() {
    while (true) {
        switch (getPlayAgainChar()) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                break;
        }
    }
}
