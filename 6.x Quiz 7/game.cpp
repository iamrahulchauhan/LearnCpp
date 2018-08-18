#include "game.h"
#include "card.h"
#include <array>
#include <iostream>

bool playBlackJack(const std::array<Card, 52> &deck) {
    const Card *cardPtr{&deck[0]};
    int playerScore{0};
    int dealerScore{0};

    //dealer gets one card and player gets two cards to start
    dealerScore += getCardValue(*cardPtr++);
    playerScore += getCardValue(*cardPtr++);
    playerScore += getCardValue(*cardPtr++);

    //player's turn
    do {
        switch (isBust(dealerScore, playerScore)) {
            case Result::PLAYER_LOSE:
                return false;
            case Result::DEALER_LOSE:
                return true;
            default:
                break;
        }
        char standOrHit{getChoice()};
        if (standOrHit == 's') break;
        else playerScore += getCardValue(*cardPtr++);
    } while (true);

    //dealer's turn
    do {
        if (dealerScore < 17) {
            dealerScore += getCardValue(*cardPtr++);
        }
        else break;
    } while (true);
    switch (isOver(dealerScore, playerScore)) {
        case Result::PLAYER_LOSE:
            return false;
        case Result::DEALER_LOSE:
            return true;
        default:
            std::cout << "Unexpected result here. -- from playBlackJack" << '\n';
            return false;
    }
}

void showScore(int dealerScore, int playerScore) {
    std::cout << "The dealer's score: " << dealerScore << '\n';
    std::cout << "The player's score: " << playerScore << '\n';
}

Result isBust(int dealerScore, int playerScore) {
    showScore(dealerScore, playerScore);
    if ((dealerScore > 21) && (playerScore > 21)) return Result::PLAYER_LOSE;
    else if (playerScore > 21) return Result::PLAYER_LOSE;
    else if (dealerScore > 21) return Result::DEALER_LOSE;
    else return Result::NOTHING;
}

Result isOver(int dealerScore, int playerScore) {
    Result bust{isBust(dealerScore, playerScore)};
    if (bust != Result::NOTHING) return bust;
    else if (dealerScore == playerScore) return Result::PLAYER_LOSE;
    else if (dealerScore > playerScore) return Result::PLAYER_LOSE;
    else if (dealerScore < playerScore) return Result::DEALER_LOSE;
}

char getChoice() {
    char standOrHit{'0'};
    do {
        std::cout << "Do you want to stand or hit? (s/h) ";
        std::cin >> standOrHit;
        std::cin.ignore(32767, '\n');
    } while ((standOrHit != 's') && (standOrHit != 'h'));
    return standOrHit;
}
