#include "calculator.h"

int add(int value1, int value2) {
    return value1 + value2;
}

int subtract(int value1, int value2) {
    return value1 - value2;
}

int multiply(int value1, int value2) {
    return value1 * value2;
}

int divide(int value1, int value2) {
    return value1 / value2;
}

arithmeticFcn getArithmetricFunction(char oper) {
    for (const arithmeticStruct arithmetic : g_arithmeticArray) {
        if (oper == arithmetic.oper) return arithmetic.fcnPtr;
    }
}
