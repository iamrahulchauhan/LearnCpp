#include "MyString.h"
#include <string>
#include <cassert>

MyString::MyString(std::string str): m_string{str} {
}

MyString::~MyString() {
}

std::string MyString::operator()(const int start, const int length) {
    assert(start + length <= m_string.length());
    std::string subString{""};
    for (int iii = 0; iii < length; iii++) subString.push_back(m_string.at(start + iii));
    return subString;
}