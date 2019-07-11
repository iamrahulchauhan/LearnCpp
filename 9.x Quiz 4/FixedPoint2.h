#ifndef FIXEDPOINT2_H
#define FIXEDPOINT2_H

#include <iostream>

class FixedPoint2 {
private:
    int16_t m_nonDeci{0};
    int16_t m_deci{0};
    bool m_isNegative{false};
    
public:
    FixedPoint2(const int nonDeci, const int deci);
    FixedPoint2(double num);
    ~FixedPoint2();
    
    operator double() const;
    FixedPoint2 operator-();
    friend FixedPoint2 operator+(const FixedPoint2 num1, const FixedPoint2 num2);
    friend bool operator==(FixedPoint2 &num1, FixedPoint2 &num2);
    friend std::ostream& operator<<(std::ostream &out, const FixedPoint2 &num);
    friend std::istream& operator>>(std::istream &in, FixedPoint2 &num);
};

#endif