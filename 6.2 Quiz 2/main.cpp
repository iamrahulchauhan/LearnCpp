#include <iostream>

namespace Animal{
    enum AnimalName{
        CHICKEN,
        DOG,
        CAT,
        ELEPHANT,
        DUCK,
        SNAKE,
        TOTAL_ANIMAL
    };
}

int main() {
    int animalLegs[Animal::TOTAL_ANIMAL]{2, 4, 4, 4, 2, 0};
    std::cout << "An elephant has " << animalLegs[Animal::ELEPHANT] << " legs." << '\n';

    return 0;
}
