#include "FruitBanana.h"

Banana::Banana(std::string name, std::string color) : Fruit(name, color) {
}

Banana::~Banana() {
}

std::ostream& operator<<(std::ostream &out, const Banana &banana) {
    out << "Banana(" << banana.getName() << ", " << banana.getColor() << ")\n";
    
    return out;
}