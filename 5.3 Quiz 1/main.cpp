#include <iostream>

int calculate(int value1, int value2, char oper) {
    switch (oper) {
        case '+':
            return value1 + value2;
        case '-':
            return value1 - value2;
        case '*':
            return value1 * value2;
        case '/':
            return value1 / value2;
        case '%':
            return value1 % value2;
        default:
            std::cout << "ERROR!" << '\n';
            return -99;
    }
}

int main() {
    int value1{0};
    int value2{0};
    char oper{'0'};
    std::cout << "Enter an integer: ";
    std::cin >> value1;
    std::cout << "Enter another integer: ";
    std::cin >> value2;
    std::cout << "Enter a operator: ";
    std::cin >> oper;
    int result = calculate(value1, value2, oper);
    if (result != -99) {
        std::cout << value1 << " " << oper << " " << value2 << " = " << result << '\n';
    }

    return 0;
}
