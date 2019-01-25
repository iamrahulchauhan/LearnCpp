#ifndef MONSTERGENERATOR_H
#define MONSTERGENERATOR_H

#include "monster.h"

class MonsterGenerator {
private:
    MonsterGenerator();
public:
    static Monster generateMonster();
    static int getRandomNumber(int min, int max);
};

#endif
