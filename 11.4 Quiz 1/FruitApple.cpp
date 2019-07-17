#include "FruitApple.h"
#include <string>

Apple::Apple(std::string name, std::string color, double fiber) : Fruit(name, color), m_fiber{fiber} {
}

Apple::~Apple() {
}

const double Apple::getFiber() const {
    return m_fiber;
}

std::ostream& operator<<(std::ostream &out, const Apple &apple) {
    out << "Apple(" << apple.getName() << ", " << apple.getColor() << ", " << apple.getFiber() << ")\n";
    
    return out;
}