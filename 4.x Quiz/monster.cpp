#include <iostream>
#include "monster.h"

void printMonster(Monster monster) {
    std::cout << "This " << printMonsterType(monster.type) << " is named " << monster.name << " and has " << monster.hp << " health." << '\n';
}

std::string printMonsterType(MonsterType type) {
    if(type == MonsterType::ORGE) return "Orge";
    if(type == MonsterType::DRAGON) return "Dragon";
    if(type == MonsterType::ORC) return "Orc";
    if(type == MonsterType::SPIDER) return "Giant Spider";
    if(type == MonsterType::SLIME) return "Slime";
}
