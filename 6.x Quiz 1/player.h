#ifndef PLAYER_H
#define PLAYER_H

enum Item {
    ITEM_HEALTH_POTION,
    ITEM_TORCH,
    ITEM_ARROW,
    ITEM_N_ITEM
};

namespace playerConstant {
    extern const int initHealthPotion;
    extern const int initTorch;
    extern const int initArrow;
}

#endif
