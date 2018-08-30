#include <iostream>

int factorial(int count) {
    if (count <= 0) return 1;
    else return count * factorial(count - 1);
}

int main () {
    int count {7};
    for (int index {1}; index <= count; ++index) {
        std::cout << factorial(index) << ' ';
    }

    return 0;
}
