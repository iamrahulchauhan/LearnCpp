#include <iostream>
#include <array>
#include "game.h"
#include "card.h"

int main() {
    std::array<Card, 52> deck = initialDeck();
    shuffleDeck(deck);

    if (playBlackJack(deck)) std::cout << "You win!" << '\n';
    else std::cout << "You lose!" << '\n';

    return 0;
}
