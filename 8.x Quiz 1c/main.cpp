#include <iostream>
#include "Point2d.h"
#include <cmath>

double distanceFrom(const Point2d &pointI, const Point2d &pointF) {
    return sqrt((pointI.m_x - pointF.m_x) * (pointI.m_x - pointF.m_x) + (pointI.m_y - pointF.m_y) * (pointI.m_y - pointF.m_y));
}

int main(int argc, char const *argv[]) {
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}
