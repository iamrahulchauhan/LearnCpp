#ifndef DECK_H
#define DECK_H

#include <array>
#include "card.h"

class Deck {
private:
    std::array<Card, 52> m_deck;
    int m_cardIndex{0};

    void swapCard(Card &a, Card &b);
    int getRandomNumber(int min, int max);

public:
    Deck();
    ~Deck();
    void printDeck() const;
    void shuffleDeck();
    Card& dealCard();
};

#endif
