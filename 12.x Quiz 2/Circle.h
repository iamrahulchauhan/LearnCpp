#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h"

class Circle : public Shape {
private:
    Point m_pt;
    int m_radius;

public:
    Circle(Point pt, int radius);
    virtual ~Circle() override;

    virtual std::string getShapeName() const override;
    virtual std::ostream& print(std::ostream &out) const override;

    int getRadius() const;
};

#endif