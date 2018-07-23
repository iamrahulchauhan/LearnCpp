#include "heightHandler.h"
#include "constant.h"
#include <iostream>

double getInitHeight() {
    double initHeight{0};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> initHeight;
    return initHeight;
}

void calculateAndPrintHeight(double initHeight) {
    double height{initHeight};
    int time{0};
    do {
        std::cout << "At " << time << " seconds, the ball is at height:\t" << height << " meters" << '\n';
        ++time;
        height = initHeight - Constant::gravity * time * time / 2;
    } while (height > 0.);
    std::cout << "At " << time << " seconds, the ball is on the ground." << '\n';
}
