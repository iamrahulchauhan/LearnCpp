#ifndef FRUIT_H
#define FRUIT_H

#include <string>

class Fruit {
private:
    std::string m_name{""};
    std::string m_color{""};

public:
    Fruit(std::string color, std::string name);
    ~Fruit();

    std::string getName();
    std::string getColor();
};

#endif