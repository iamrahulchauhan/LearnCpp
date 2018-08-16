#include "student.h"
#include <iostream>
#include <string>
#include <algorithm>

void enterGrade(Student students[], int studentNum) {
    std::string inputName{""};
    int inputGrade{0};
    for (int index{0}; index < studentNum; ++index) {
        std::getline(std::cin, inputName);
        students[index].name = inputName;
        std::cin >> inputGrade;
        std::cin.ignore(32767, '\n');
        students[index].grade = inputGrade;
    }
}

void sortGrade(Student students[], int studentNum) {
    while (studentNum > 1) {
        for (int index{0}; index < studentNum - 1; ++index) {
            if (students[index].grade < students[index + 1].grade) std::swap(students[index], students[index + 1]);
        }
        --studentNum;
    }
}

void printGrade(Student students[], int studentNum) {
    std::cout << '\n';
    for (int index{0}; index < studentNum; ++index) {
        std::cout << students[index].name << " got a grade of " << students[index].grade << '\n';
    }
}
