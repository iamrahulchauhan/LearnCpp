#include "fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator): m_numerator{numerator}, m_denominator{denominator} {
    reduce();
}

Fraction::~Fraction() {
}

void Fraction::print() const {
    std::cout << m_numerator << "/" << m_denominator << '\n';
}

int Fraction::gcd(int a, int b) {
    return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
}

void Fraction::reduce() {
    int gcdNum = gcd(m_numerator, m_denominator);
    m_numerator /= gcdNum;
    m_denominator /= gcdNum;
}

Fraction operator*(const Fraction &frac1, const Fraction &frac2) {
    return Fraction(frac1.m_numerator * frac2.m_numerator, frac1.m_denominator * frac2.m_denominator);
}

Fraction operator*(const Fraction &frac, const int value) {
    return Fraction(frac.m_numerator * value, frac.m_denominator);
}

Fraction operator*(const int value, const Fraction &frac) {
    return Fraction(frac.m_numerator * value, frac.m_denominator);
}
