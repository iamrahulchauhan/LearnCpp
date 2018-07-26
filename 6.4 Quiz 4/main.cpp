#include <iostream>

int bubbleSort(int array[], int length) {
    int iteTimes{0};
    do {
        ++iteTimes;
        bool noSwap{true};
        for (int index{0}; index < length - 1; ++index) {
            if (array[index] > array [index + 1]) {
                std::swap(array[index], array[index + 1]);
                noSwap = false;
            }
        }
        if (noSwap) return iteTimes;
        --length;
    } while (length > 1);
    return iteTimes;
}

int main() {
    const int length(9);
    int array[length] = {6, 3, 2, 9, 7, 1, 5, 4, 8};

    int iteTimes{bubbleSort(array, length)};
    if (iteTimes == length - 1) std::cout << "Termination on iteration " << iteTimes << '\n';
    else std::cout << "Early termination on iteration " << iteTimes << '\n';

    for (int counter{0}; counter < length; ++counter) {
        std::cout << array[counter] << " ";
    }

    return 0;
}
