#include <iostream>
#include "fraction.h"

int main() {
    Fraction value1;
    Fraction value2;

    std::cout << "Enter the numerator of the first fraction: ";
    std::cin >> value1.numerator;
    std::cout << "Enter the denominator of the first fraction: ";
    std::cin >> value1.denominator;

    std::cout << "Enter the numerator of the second fraction: ";
    std::cin >> value2.numerator;
    std::cout << "Enter the denominator of the second fraction: ";
    std::cin >> value2.denominator;

    fractionMultiplier(value1, value2);

    return 0;
}
