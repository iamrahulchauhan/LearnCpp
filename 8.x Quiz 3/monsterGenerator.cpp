#include "monsterGenerator.h"
#include "monster.h"
#include <cstdlib>
#include <array>

MonsterGenerator::MonsterGenerator() {
}

Monster MonsterGenerator::generateMonster() {
    static std::array<std::string, 6> nameArray{"Name1", "Name2", "Name3", "Name4", "Name5", "Name6"};
    static std::array<std::string, 6> roarArray{"*roar1*", "*roar2*", "*roar3*", "*roar4*", "*roar5*", "*roar6*"};
    return Monster(static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES)),
                   nameArray.at(getRandomNumber(0, 5)), roarArray.at(getRandomNumber(0, 5)), getRandomNumber(1, 100));
}

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int MonsterGenerator::getRandomNumber(int min, int max) {
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
