#include "gradeMap.h"
#include <string>

GradeMap::GradeMap() {
}

GradeMap::~GradeMap() {
}

char& GradeMap::operator[](const std::string name) {
    for (auto &student : m_map)
        if (student.name == name) return student.grade;
    m_map.push_back({name});
    return m_map.back().grade;
}