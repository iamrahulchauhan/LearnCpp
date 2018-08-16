#include <iostream>
#include <string>
#include "student.h"

int main() {
    std::cout << "Enter how many students there are: ";
    int studentNum{0};
    std::cin >> studentNum;
    std::cin.ignore(32767, '\n');
    std::cout << '\n';

    Student *students = new Student[studentNum];
    enterGrade(students, studentNum);
    sortGrade(students, studentNum);
    printGrade(students, studentNum);
    delete[] students;

    return 0;
}
