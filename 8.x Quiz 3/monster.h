#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    enum MonsterType {
        MONSTERTYPE_DRAGON,
        MONSTERTYPE_GOBLIN,
        MONSTERTYPE_OGRE,
        MONSTERTYPE_ORC,
        MONSTERTYPE_SKELETON,
        MONSTERTYPE_TROLL,
        MONSTERTYPE_VAMPIRE,
        MONSTERTYPE_ZOMBIE,
        MAX_MONSTER_TYPES
    };

private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hitPoints;
    std::string getTypeString() const;

public:
    Monster(MonsterType type, std::string name, std::string roar, int hitPoints);
    void print() const;
};

#endif
