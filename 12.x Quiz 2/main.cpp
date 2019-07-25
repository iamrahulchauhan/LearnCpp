#include "Circle.h"
#include "Triangle.h"
#include <iostream>
#include <vector>

int getLargestRadius(std::vector<Shape*> vec) {
    int largestR{0};
    for (auto const shape : vec) {
        Circle *circle = dynamic_cast<Circle*>(shape);
        if (circle) {
            if (circle->getRadius() > largestR) largestR = circle->getRadius();
        }
    }
    return largestR;
}

int main() {
	std::vector<Shape*> v;
	v.push_back(new Circle(Point(1, 2, 3), 7));
	v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
	v.push_back(new Circle(Point(4, 5, 6), 3));

	// print each shape in vector v on its own line here
    for (auto const shape : v) std::cout << *shape << '\n';

    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function

	// delete each element in the vector here
    for (auto shape : v) delete shape;

    system("pause");
    return 0;
}