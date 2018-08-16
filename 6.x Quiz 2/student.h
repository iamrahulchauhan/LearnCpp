#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    std::string name;
    int grade;
};

void enterGrade(Student students[], int studentNum);
void sortGrade(Student students[], int studentNum);
void printGrade(Student students[], int studentNum);

#endif
