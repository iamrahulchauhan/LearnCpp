#include "Department.h"
#include "Teacher.h"
#include <iostream>

Department::Department() {
}

Department::~Department() {
}

void Department::add(Teacher *teacher) {
    m_list.push_back(teacher);
}

std::ostream& operator<<(std::ostream &out, Department &dept) {
    out << "Department:";
    for (auto teacher : dept.m_list) out << ' ' << teacher->getName();
    out << '\n';
    return out;
}