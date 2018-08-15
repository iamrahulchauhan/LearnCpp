#include <iostream>
#include "player.h"

int countTotalItems(int carriedItem[]) {
    int totalItem{0};
    for (int index{0}; index < ITEM_N_ITEM; ++index) {
        totalItem += carriedItem[index];
    }
    return totalItem;
}

int main() {
    int carriedItem[ITEM_N_ITEM]{playerConstant::initHealthPotion, playerConstant::initTorch, playerConstant::initArrow};
    std::cout << "The player carries " << countTotalItems(carriedItem) << " items in total." << '\n';

    return 0;
}
