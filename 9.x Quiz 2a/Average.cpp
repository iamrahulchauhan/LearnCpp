#include "Average.h"
#include <iostream>
#include <cassert>

Average::Average() {
}

Average::~Average() {
}

Average& Average::operator+=(const int number) {
    m_sum += number;
    ++m_count;
    return *this;
}

std::ostream& operator<<(std::ostream &out, const Average &avg) {
    assert(avg.m_count != 0);
    out << avg.m_sum/static_cast<double>(avg.m_count);
    return out;
}