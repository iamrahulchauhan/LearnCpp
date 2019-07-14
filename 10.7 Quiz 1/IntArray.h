#ifndef INTARRAY_H
#define INTARRAY_H
 
#include <initializer_list> // for std::initializer_list
#include <iostream>
 
class IntArray {
private:
	int m_length {};
	int *m_data {};

public:
	IntArray();
	IntArray(int length);
	IntArray(const std::initializer_list<int> &list);
	~IntArray();
 
	IntArray(const IntArray&) = delete; // to avoid shallow copies
	IntArray& operator=(const IntArray& list) = delete; // to avoid shallow copies
 
    IntArray& operator=(const std::initializer_list<int> &list);
	int& operator[](int index);
    
	int getLength();
};

#endif