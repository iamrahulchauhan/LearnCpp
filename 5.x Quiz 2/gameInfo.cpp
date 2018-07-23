#include "gameInfo.h"
#include "gameBody.h"
#include "constants.h"
#include "randomNumGenerator.h"
#include "stringHandler.h"
#include <iostream>

void starter() {
    std::cout << "Let's play a game. I'm thinking of a number." <<
    " You have " << Constants::totalTry << " tries to guess what it is." << '\n';
    const int answerNum{getRandomNumber(Constants::randRangeMin, Constants::randRangeMax)};
    switch (gameBody(Constants::totalTry, answerNum)) {
        case Result::WIN:
            std::cout << "Correct! You win!" << '\n';
            break;
        case Result::LOSE:
            std::cout << "Sorry, you lose. The correct number was " << answerNum << "." << '\n';
            break;
        default:
            std::cout << "ERROR! ERROR! -- from starter" << '\n';
            exit(0);
    }
    ender();
}

void ender() {
    bool playAgain{false};
    playAgain = isTypeY();
    if (playAgain) {
        starter();
    }
    else {
        std::cout << "Thank you for playing." << '\n';
    }
}
