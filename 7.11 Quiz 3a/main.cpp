#include <iostream>

void convertToBinary(unsigned int input) {
    if (input == 0) return;
    else convertToBinary(input / 2);
    std::cout << input % 2;
}

int main() {
    convertToBinary(148);
    std::cout << '\n';
    convertToBinary(-15);

    return 0;
}
