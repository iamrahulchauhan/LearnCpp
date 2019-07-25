#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "Point.h"

class Triangle : public Shape {
private:
    Point m_pt1;
    Point m_pt2;
    Point m_pt3;

public:
    Triangle(Point pt1, Point pt2, Point pt3);
    virtual ~Triangle() override;

    virtual std::string getShapeName() const override;
    virtual std::ostream& print(std::ostream &out) const override;
};

#endif