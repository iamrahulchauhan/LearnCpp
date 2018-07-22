#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

enum class Animal {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH
};

std::string getAnimalName(Animal animal);

void printNumOfLegs(Animal animal);

#endif
