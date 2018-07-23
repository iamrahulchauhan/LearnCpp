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

int getNumber(int numTry) {
    while (true) {
        std::cout << "Guess #" << numTry << ": ";
        int guessNum;
        std::cin >> guessNum;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Oops, that input is invalid.  Please try again." << '\n';
        }
        else {
            std::cin.ignore(32767,'\n');
            return guessNum;
        }
    }
}
