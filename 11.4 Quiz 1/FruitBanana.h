#ifndef FRUITBANANA_H
#define FRUITBANANA_H

#include "Fruit.h"

class Banana : public Fruit {
public:
    Banana(std::string name, std::string color);
    ~Banana();
    
    friend std::ostream& operator<<(std::ostream &out, const Banana &banana);
};

#endif