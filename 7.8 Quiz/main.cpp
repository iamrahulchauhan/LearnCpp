#include <iostream>
#include "inputHandler.h"
#include "calculator.h"
#include <array>

int main() {
    int value1 = numberInput();
    char oper = operatorInput();
    int value2 = numberInput();

    arithmeticFcn fcnPtr = getArithmetricFunction(oper);
    std::cout << value1 << " " << oper << " " << value2 << " is " << fcnPtr(value1, value2) << '\n';

    return 0;
}
