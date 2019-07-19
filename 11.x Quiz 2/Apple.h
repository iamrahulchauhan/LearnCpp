#ifndef APPLE_H
#define APPLE_H

#include <string>
#include "Fruit.h"

class Apple : public Fruit {
public:
    Apple(std::string color = "red", std::string name = "apple");
    ~Apple();
};

#endif