#ifndef BANANA_H
#define BANANA_H

#include <iostream>
#include "Fruit.h"

class Banana : public Fruit {
public:
    Banana(std::string color = "yellow", std::string name = "banana");
    ~Banana();
};

#endif