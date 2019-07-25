#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    int m_xValue;
    int m_yValue;
    int m_zValue;

public:
    Point(int xValue = 0, int yValue = 0, int zValue = 0);
    ~Point();

    friend std::ostream& operator<<(std::ostream &out, const Point &pt);
};

#endif