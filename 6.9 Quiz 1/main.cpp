#include <iostream>
#include <string>
#include <algorithm>

void sortNameList(std::string nameList[], int nameNum) {
    for (; nameNum > 1; --nameNum) {
        for (int counter{0}; counter < nameNum - 1; ++counter) {
            if (nameList[counter] > nameList[counter + 1]) std::swap(nameList[counter], nameList[counter + 1]);
        }
    }
}

int main() {
    std::cout << "How many names would you like to enter? ";
    int nameNum{0};
    std::cin >> nameNum;
    std::string *nameList = new std::string[nameNum]();
    for (int counter{0}; counter < nameNum; ++counter) {
        std::cout << "Enter name #" << counter + 1 << ": ";
        std::cin >> nameList[counter];
    }
    sortNameList(nameList, nameNum);
    std::cout << '\n' << "Here is your sorted list: " << '\n';
    for (int counter{0}; counter < nameNum; ++counter) {
        std::cout << "Name #" << counter + 1 << ": " << nameList[counter] << '\n';
    }
    delete[] nameList;

    return 0;
}
