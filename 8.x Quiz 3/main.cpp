#include <string>
#include <ctime>
#include <cstdlib>
#include "monster.h"
#include "monsterGenerator.h"

int main(int argc, char const *argv[]) {
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value

    Monster m = MonsterGenerator::generateMonster();
	m.print();

    system("pause");
    return 0;
}
