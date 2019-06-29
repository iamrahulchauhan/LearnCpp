#ifndef GRADEMAP_H
#define GRADEMAP_H

#include <string>
#include <vector>

struct StudentGrade {
    std::string name;
    char grade;
};

class GradeMap {
private:
    std::vector<StudentGrade> m_map {};
    
public:
    GradeMap();
    ~GradeMap();
    
    char& operator[](const std::string name);
};

#endif