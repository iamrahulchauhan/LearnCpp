#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

class Shape {
public:
    Shape();
    virtual ~Shape();

    virtual std::string getShapeName() const = 0;
    virtual std::ostream& print(std::ostream &out) const = 0;
    friend std::ostream& operator<<(std::ostream &out, const Shape &shape);
};

#endif