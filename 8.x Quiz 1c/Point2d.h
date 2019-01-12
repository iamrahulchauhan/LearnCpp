#ifndef POINT2D_H
#define POINT2D_H

class Point2d {
private:
    // double m_x{0.0};
    // double m_y{0.0};
    double m_x;
    double m_y;
public:
    // Point2d();
    Point2d(double x = 0.0, double y = 0.0);
    ~Point2d();

    void print();

    friend double distanceFrom(const Point2d &pointI, const Point2d &pointF);
};

#endif
