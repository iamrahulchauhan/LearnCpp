#include "Triangle.h"

Triangle::Triangle(Point pt1, Point pt2, Point pt3) :
                    m_pt1{pt1}, m_pt2{pt2}, m_pt3{pt3} {
}

Triangle::~Triangle() {
}

std::string Triangle::getShapeName() const {
    return "Triangle";
}

std::ostream& Triangle::print(std::ostream &out) const {
    out << getShapeName() << "(" << m_pt1 << ", " << m_pt2 << ", " << m_pt3 << ")";
    return out;
}