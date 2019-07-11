#include "FixedPoint2.h"
#include <iostream>
#include <cassert>
#include <cmath>

FixedPoint2::FixedPoint2(const int nonDeci, const int deci) {
    m_nonDeci = (nonDeci < 0) ? -nonDeci : nonDeci;
    m_deci = (deci < 0) ? -deci : deci;
    if (nonDeci < 0 || deci < 0) m_isNegative = true;
    
//  handle the carry
    m_nonDeci += m_deci / 100;
    m_deci = m_deci % 100;
}

FixedPoint2::FixedPoint2(double num) {
    if (num < 0) {
        m_isNegative = true;
        num = -num;
    }
    m_nonDeci = static_cast<int>(num);
    m_deci = static_cast<int16_t>(round((num - m_nonDeci) * 100));
}

FixedPoint2::~FixedPoint2() {
}

FixedPoint2::operator double() const {
    double num = m_nonDeci + m_deci/100.;
    if (m_isNegative) num = -num;
    return num;
}

FixedPoint2 FixedPoint2::operator-() {
    return m_isNegative ? FixedPoint2(m_nonDeci, m_deci) : FixedPoint2(-m_nonDeci, -m_deci);
}

FixedPoint2 operator+(const FixedPoint2 num1, const FixedPoint2 num2) {
    return FixedPoint2(static_cast<double>(num1) + static_cast<double>(num2));
}

bool operator==(FixedPoint2 &num1, FixedPoint2 &num2) {
    return static_cast<double>(num1) == static_cast<double>(num2);
}

std::ostream& operator<<(std::ostream &out, const FixedPoint2 &num) {
    out << static_cast<double>(num);
    return out;
}

std::istream& operator>>(std::istream &in, FixedPoint2 &num) {
    double tempNum;
    in >> tempNum;
    num = FixedPoint2(tempNum);
    return in;
}