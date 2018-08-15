#include <iostream>

int main() {
    int value1 = 5;
    int value2 = 6;
    int *ptr = &value1;
    int *&ref = ptr;
    ref = &value2;
    std::cout << *ptr << '\n';

    int **ptrptr = &ptr;
    *ptrptr = &value1;
    std::cout << *ptr << '\n';

    return 0;
}
