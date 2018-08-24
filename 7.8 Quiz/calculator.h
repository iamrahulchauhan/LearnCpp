#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <array>

typedef int (*arithmeticFcn)(int, int);

struct arithmeticStruct {
    char oper;
    arithmeticFcn fcnPtr;
};

int add(int value1, int value2);
int subtract(int value1, int value2);
int multiply(int value1, int value2);
int divide(int value1, int value2);

// static const std::array<arithmeticStruct, 4> g_arithmeticArray {
//     {'+', add},
//     {'-', substract},
//     {'*', multiply},
//     {'/', divide}
// };

static const arithmeticStruct g_arithmeticArray[] {
	{ '+', add },
	{ '-', subtract },
	{ '*', multiply },
	{ '/', divide }
};

arithmeticFcn getArithmetricFunction(char oper);

#endif
