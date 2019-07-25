#include "Shape.h"

Shape::Shape() {
}

Shape::~Shape() {
}

std::ostream& operator<<(std::ostream &out, const Shape &shape) {
    return shape.print(out);
}