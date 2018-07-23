#include "randomNumGenerator.h"
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max) {
    std::srand(static_cast<unsigned int>(std::time(0)));
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}
