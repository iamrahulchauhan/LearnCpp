#include <iostream>

int inputAndCheck() {
    int inputNum{0};
    while (true) {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> inputNum;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Wrong format!" << '\n';
        }
        else {
            std::cin.ignore(32767, '\n');
            break;
        }
    }
    return inputNum;
}

void printArray (int array[], int arrayLength, int inputNum) {
    int searchInput{0};
    for (int counter{0}; counter < arrayLength; ++counter) {
        std::cout << array[counter] << " ";
        if (array[counter] == inputNum) searchInput = array[counter];
    }
    std::cout << '\n';
    std::cout << "The index of the element is " << searchInput << '\n';
}

int main() {
    int array[]{4, 6, 7, 3, 8, 2, 1, 9, 5};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    do {
        int inputNum{inputAndCheck()};
        if ((inputNum >= 1) && (inputNum <= 9)) {
            printArray(array, arrayLength, inputNum);
            break;
        }
        else std::cout << "Out of the range between 1 and 9!" << '\n';
    } while (true);

    return 0;
}
