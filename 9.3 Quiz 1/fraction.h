#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction(int numerator = 1, int denominator = 1);
    ~Fraction();

    void print() const;
private:
    int gcd(int a, int b);
    void reduce();
public:
    friend Fraction operator*(const Fraction &frac1, const Fraction &frac2);
    friend Fraction operator*(const Fraction &frac, const int value);
    friend Fraction operator*(const int value, const Fraction &frac);
    
    friend std::ostream& operator<<(std::ostream &out, const Fraction &frac);
    friend std::istream& operator>>(std::istream &in, Fraction &frac);
};

#endif
