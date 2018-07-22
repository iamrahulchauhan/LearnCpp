#include <iostream>

int sumTo(int value) {
    int result{0};
    for (int init{1}; init <= value; ++init) {
        result += init;
    }
    return result;
}

int main() {
    int value{0};
    std::cin >> value;
    std::cout << sumTo(value) << '\n';

    return 0;
}
