#include "Circle.h"

Circle::Circle(Point pt, int radius) : m_pt{pt}, m_radius{radius} {
}

Circle::~Circle() {
}

std::string Circle::getShapeName() const {
    return "Circle";
}

std::ostream& Circle::print(std::ostream &out) const {
    out << getShapeName() << "(" << m_pt << ", " << m_radius << ")";
    return out;
}

int Circle::getRadius() const {
    return m_radius;
}