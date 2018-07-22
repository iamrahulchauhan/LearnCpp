#include <iostream>
#include "monster.h"

int main() {
    Monster orc{MonsterType::ORC, "Torg", 145};
    Monster slime{MonsterType::SLIME, "Blurp", 23};
    printMonster(orc);
    printMonster(slime);

    return 0;
}
