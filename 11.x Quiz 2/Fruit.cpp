#include "Fruit.h"

Fruit::Fruit(std::string color, std::string name) : m_color{color}, m_name{name} {
}

Fruit::~Fruit() {
}

std::string Fruit::getName() {
    return m_name;
}

std::string Fruit::getColor() {
    return m_color;
}