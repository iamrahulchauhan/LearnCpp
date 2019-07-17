#include "Fruit.h"
#include <iostream>
#include <string>

Fruit::Fruit(std::string name, std::string color) : m_name{name}, m_color(color) {
}

Fruit::~Fruit() {
}

const std::string& Fruit::getName() const {
    return m_name;
}

const std::string& Fruit::getColor() const {
    return m_color;
}