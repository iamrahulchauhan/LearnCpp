#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int m_numerator{1};
    int m_denominator{1};
public:
    Fraction(int numerator, int denominator);
    ~Fraction();

    void print() const;
private:
    int gcd(int a, int b);
    void reduce();
public:
    friend Fraction operator*(const Fraction &frac1, const Fraction &frac2);
    friend Fraction operator*(const Fraction &frac, const int value);
    friend Fraction operator*(const int value, const Fraction &frac);
};

#endif
