#ifndef CALCULATOR_H
#define CALCULATOR_H

typedef int (*arithmeticFcn)(int, int);

int add(int value1, int value2);
int substract(int value1, int value2);
int multiply(int value1, int value2);
int divide(int value1, int value2);

arithmeticFcn getArithmetricFunction(char oper);

#endif
