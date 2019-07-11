#include "IntArray.h"
#include <iostream>
#include <cassert>

IntArray::IntArray(const int size) : m_size{size} {
    assert(m_size > 0);
    m_element = new int[m_size];
}

IntArray::IntArray(const IntArray &array) {
    m_size = array.m_size;
    m_element = new int[m_size];
    for (int iii{0}; iii < m_size; ++iii) m_element[iii] = array.m_element[iii];
}

IntArray::~IntArray() {
    delete[] m_element;
}

IntArray& IntArray::operator=(const IntArray &array) {
    if (this == &array) return *this;
    else delete[] m_element;
    
    m_size = array.m_size;
    m_element = new int[m_size];
    for (int iii{0}; iii < m_size; ++iii) m_element[iii] = array.m_element[iii];
    return *this;
}

int& IntArray::operator[](const int index) {
    assert(index >= 0 && index < m_size);
    return (*this).m_element[index];
}

std::ostream& operator<<(std::ostream &out, const IntArray &array) {
//     for (auto element : array.m_element) out << element << " ";
    for (int iii{0}; iii < array.m_size; ++iii) out << array.m_element[iii] << " ";
    return out;
}