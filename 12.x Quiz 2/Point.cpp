#include "Point.h"

Point::Point(int xValue, int yValue, int zValue) :
            m_xValue{xValue}, m_yValue{yValue}, m_zValue{zValue} {
}

Point::~Point() {
}

std::ostream& operator<<(std::ostream &out, const Point &pt) {
    out << "Point(" << pt.m_xValue << ", " << pt.m_yValue << ", " << pt.m_zValue << ")";
    return out;
}