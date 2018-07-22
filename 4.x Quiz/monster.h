#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>

enum class MonsterType {
    ORGE,
    DRAGON,
    ORC,
    SPIDER,
    SLIME
};

struct Monster {
    MonsterType type;
    std::string name;
    long hp;
};

void printMonster(Monster monster);

std::string printMonsterType(MonsterType type);

#endif
