#include "monster.h"
#include <iostream>

std::string Monster::getTypeString() const {
    switch (m_type) {
        case Monster::MONSTERTYPE_ORC: return "orc";
        case Monster::MONSTERTYPE_OGRE: return "ogre";
        case Monster::MONSTERTYPE_TROLL: return "troll";
        case Monster::MONSTERTYPE_DRAGON: return "dragon";
        case Monster::MONSTERTYPE_GOBLIN: return "goblin";
        case Monster::MONSTERTYPE_ZOMBIE: return "zombie";
        case Monster::MONSTERTYPE_VAMPIRE: return "vampire";
        case Monster::MONSTERTYPE_SKELETON: return "skeleton";
        default:
            std::cout << "Error in Monster::getTypeString() in monster.cpp!!" << '\n';
            exit(1);
    }
}

Monster::Monster(Monster::MonsterType type, std::string name, std::string roar, int hitPoints)
    : m_type{type}, m_name{name}, m_roar{roar}, m_hitPoints{hitPoints} {
}

void Monster::print() const {
    std::cout << m_name << " the " << getTypeString() << " has " <<
                 m_hitPoints << " hit points and says " << m_roar << '\n';
}
