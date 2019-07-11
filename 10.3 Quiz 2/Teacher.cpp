#include "Teacher.h"
#include <string>

Teacher::Teacher(std::string name) : m_name{name} {
}

Teacher::~Teacher() {
}

std::string Teacher::getName() const {
    return m_name;
}