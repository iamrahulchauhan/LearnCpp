#include "inputHandler.h"
#include <iostream>

int numberInput() {
    std::cout << "Please enter an integer: ";
    int number{0};
    while (true) {
        std::cin >> number;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Invalid input, please try again: ";
        }
        else {
            std::cin.ignore(32767, '\n');
            return number;
        }
    }
}

char operatorInput() {
    std::cout << "Please enter an operator (+, -, * or /): ";
    char oper{'0'};
    while (true) {
        std::cin >> oper;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else if ((oper != '+') && (oper != '-') && (oper != '*') && (oper != '/')) {
            std::cin.ignore(36767, '\n');
        }
        else {
            std::cin.ignore(36767, '\n');
            return oper;
        }
        std::cout << "Invalid input, please try again: ";
    }
}
