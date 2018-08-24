#include "calculator.h"

int add(int value1, int value2) {
    return value1 + value2;
}

int substract(int value1, int value2) {
    return value1 - value2;
}

int multiply(int value1, int value2) {
    return value1 * value2;
}

int divide(int value1, int value2) {
    return value1 / value2;
}

arithmeticFcn getArithmetricFunction(char oper) {
    switch (oper) {
        case '+': return add;
        case '-': return substract;
        case '*': return multiply;
        case '/': return divide;
        default: return add;
    }
}
