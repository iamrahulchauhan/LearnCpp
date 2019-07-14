#include "IntArray.h"
#include <cassert> // for assert()
#include <initializer_list> // for std::initializer_list
#include <iostream>

IntArray::IntArray() {
}

IntArray::IntArray(int length) : m_length(length) {
    m_data = new int[length];
}

// use delegating constructor to set up initial array
// allow IntArray to be initialized via list initialization
IntArray::IntArray(const std::initializer_list<int> &list) :
                    IntArray(static_cast<int>(list.size())) {
    // Now initialize our array from the list
    int count = 0;
    for (auto &element : list) {
        m_data[count] = element;
        ++count;
    }
}

IntArray::~IntArray() {
    delete[] m_data;
    // we don't need to set m_data to null or m_length to 0 here
    // since the object will be destroyed immediately after this function anyway
}

IntArray& IntArray::operator=(const std::initializer_list<int> &list) {
    delete[] m_data;
    m_length = static_cast<int>(list.size());
    m_data = new int[m_length];
    
    int count = 0;
    for (auto &element : list) {
        m_data[count] = element;
        ++count;
    }
    return *this;
}

int& IntArray::operator[](int index) {
    assert(index >= 0 && index < m_length);
    return m_data[index];
}

int IntArray::getLength() {
    return m_length;
}