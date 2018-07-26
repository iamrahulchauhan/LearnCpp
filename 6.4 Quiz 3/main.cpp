#include <iostream>

void bubbleSort(int array[], int length) {
    do {
        for (int index{0}; index < length - 1; ++index) {
            if (array[index] > array [index + 1]) std::swap(array[index], array[index + 1]);
        }
        --length;
    } while (length > 1);
}

int main() {
    const int length(9);
    int array[length] = {6, 3, 2, 9, 7, 1, 5, 4, 8};

    bubbleSort(array, length);

    for (int counter{0}; counter < length; ++counter) {
        std::cout << array[counter] << " ";
    }

    return 0;
}
