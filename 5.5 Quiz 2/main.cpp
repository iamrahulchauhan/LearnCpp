#include <iostream>

int main() {
    char letter{97};
    while (letter <= 122) {
        std::cout << letter << " " << static_cast<int>(letter) << '\n';
        ++letter;
    }

    return 0;
}
