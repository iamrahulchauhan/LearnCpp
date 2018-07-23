#include "gameBody.h"
#include "constants.h"
#include "stringHandler.h"
#include <iostream>

Result gameBody(int totalTry, int answerNum) {
    int guessNum{0};
    for (int numTry{1}; numTry <= totalTry; ++numTry) {
        guessNum = getNumber(numTry);
        if (guessNum == answerNum) {
            return Result::WIN;
        }
        else if (guessNum < answerNum) {
            std::cout << "Your guess is too low." << '\n';
        }
        else if (guessNum > answerNum) {
            std::cout << "Your guess is too high." << '\n';
        }
        else {
            std::cout << "ERROR! ERROR! -- from gameBody" << '\n';
            exit(0);
        }
    }
    return Result::LOSE;
}
