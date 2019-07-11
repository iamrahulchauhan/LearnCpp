#ifndef TEACHER_H
#define TEACHER_H

#include <string>

class Teacher {
private:
    std::string m_name;
    
public:
    Teacher(std::string name);
    ~Teacher();
    
    std::string getName() const;
};

#endif