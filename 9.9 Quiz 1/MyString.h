#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>

class MyString {
private:
    std::string m_string;
public:
    MyString(std::string str);
    ~MyString();
    
    std::string operator()(const int start, const int length);
};

#endif