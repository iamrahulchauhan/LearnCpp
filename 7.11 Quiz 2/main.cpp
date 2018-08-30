#include <iostream>

int sumOfEachDigit(int input) {
    if (input <= 0) return 0;
    else return (input % 10) + sumOfEachDigit(input / 10);
}

int main() {
    std::cout << sumOfEachDigit(93427) << '\n';

    return 0;
}
