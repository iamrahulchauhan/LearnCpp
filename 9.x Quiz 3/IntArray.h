#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray {
private:
    int *m_element;
    int m_size;

public:
    IntArray(const int size);
    IntArray(const IntArray &array);
    ~IntArray();
    
    IntArray& operator=(const IntArray &array);
    int& operator[](const int index);
    friend std::ostream& operator<<(std::ostream &out, const IntArray &array);
};

#endif