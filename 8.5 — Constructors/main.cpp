#include <iostream>
#include <cassert>

class Fraction {
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction() {
        m_numerator = 0;
        m_denominator = 1;
    }
    Fraction(int numerator, int denominator = 1) {
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }

    int getNumerator() {
        return m_numerator;
    }
    int getDenominator() {
        return m_denominator;
    }
    void printNumeratorDenominator() {
        std::cout << m_numerator << "/" << m_denominator << '\n';
    }
};

class InnerClass {
public:
    InnerClass() {
        std::cout << "It is in InnerClass." << '\n';
    }
private:
    Fraction m_test;
};

int main(int argc, char const *argv[]) {
    Fraction value1;
    value1.printNumeratorDenominator();
    Fraction value2{3};
    value2.printNumeratorDenominator();
    Fraction value3{3, 5};
    value3.printNumeratorDenominator();

    InnerClass test;

    return 0;
}
