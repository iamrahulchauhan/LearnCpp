#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Teacher.h"
#include <vector>
#include <iostream>

class Department {
private:
    std::vector<Teacher*> m_list{};
    
public:
    Department();
    ~Department();
    
    void add(Teacher *teacher);
    
    friend std::ostream& operator<<(std::ostream &out, Department &dept);
};

#endif