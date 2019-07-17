#ifndef FRUITAPPLE_H
#define FRUITAPPLE_H

#include "Fruit.h"

class Apple : public Fruit {
private:
    double m_fiber{0.};
    
public:
    Apple(std::string name, std::string color, double fiber);
    ~Apple();
    
    const double getFiber() const;
    
    friend std::ostream& operator<<(std::ostream &out, const Apple &apple);
};

#endif