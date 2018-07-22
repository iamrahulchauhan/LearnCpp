#include <iostream>
#include "fraction.h"

void fractionMultiplier(Fraction value1, Fraction value2) {
    std::cout << "The result of the multiplication of values is " << static_cast<double>((value1.numerator * value2.numerator) / (value1.denominator * value2.denominator)) << '\n';
}
