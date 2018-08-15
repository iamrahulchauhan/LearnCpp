#include <iostream>

enum Item {
    ITEM_HEALTH_POTION,
    ITEM_TORCH,
    ITEM_ARROW,
    ITEM_N_ITEM
};

namespace playerConstant {
    const int initHealthPotion{2};
    const int initTorch{5};
    const int initArrow{10};
}

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
