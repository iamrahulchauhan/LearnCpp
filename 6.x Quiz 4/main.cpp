#include <iostream>

void printCString(const char *str) {
    while (*str != '\0') {
        std::cout << *str;
        ++str;
    }
}

int main() {
    char str[] = "Hello, world!";
    printCString(str);

    return 0;
}
