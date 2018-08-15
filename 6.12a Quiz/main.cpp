#include <iostream>
#include <string>

int main() {
    std::string nameArray[]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Gred", "Holly"};
    std::cout << "Enter a name: ";
    std::string nameInput;
    std::getline(std::cin, nameInput);
    bool isFound{false};
    for (const auto name : nameArray) {
        if (name == nameInput) {
            isFound = true;
            break;
        }
    }
    if (isFound) std::cout << nameInput << " was found." << '\n';
    else std::cout << nameInput << " was not found." << '\n';

    return 0;
}
