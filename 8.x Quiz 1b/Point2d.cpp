#include <iostream>
#include "Point2d.h"
#include <cmath>

// Point2d::Point2d() {
// }

Point2d::Point2d(double x, double y): m_x{x}, m_y{y} {
}

Point2d::~Point2d() {
}


void Point2d::print() {
    std::cout << "Point2d(" << m_x << ", " <<
                               m_y << ");" << '\n';
}

double Point2d::distanceTo(const Point2d &point) {
    return sqrt((m_x - point.m_x) * (m_x - point.m_x) + (m_y - point.m_y) * (m_y - point.m_y));
}
