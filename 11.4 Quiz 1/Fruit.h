#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include <iostream>

class Fruit {
private:
    std::string m_name{""};
    std::string m_color{""};
    
public:
    Fruit(std::string name, std::string color);
    ~Fruit();
    
    const std::string& getName() const;
    const std::string& getColor() const;
};

#endif