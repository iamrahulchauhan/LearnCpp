#include <iostream>

class IntPair {
public:
    int m_firstInt;
    int m_secondInt;

    void set(int value1, int value2) {
        m_firstInt = value1;
        m_secondInt = value2;
    }
    void print() {
        std::cout << "Pair(" << m_firstInt << ", " << m_secondInt << ")\n";
    }
};

int main(int argc, char const *argv[]) {
    IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

    return 0;
}
