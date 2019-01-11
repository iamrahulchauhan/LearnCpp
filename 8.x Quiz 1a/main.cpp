#include <iostream>
#include "Point2d.h"

int main(int argc, char const *argv[]) {
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();

    return 0;
}
