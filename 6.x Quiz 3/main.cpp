#include <iostream>

void intSwap(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int a{1};
    int b{2};
    intSwap(a, b);
    std::cout << "a: " << a << ", b: " << b << '\n';

    return 0;
}
