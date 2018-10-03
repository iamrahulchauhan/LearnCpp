#include <iostream>
#include <array>
#include <cassert>

class Stack {
    static const int m_maxLength {10};
    std::array<int, m_maxLength> m_array;
    int m_length;
public:
    void reset() {
        m_length = 0;
        for (int i : m_array) i = 0;
    }
    bool push(int num) {
        if (m_length == m_maxLength) return false;
        else {
            m_array[m_length++] = num;
            return true;
        }
    }
    int pop() {
        assert((m_length > 0) && (m_length <= m_maxLength) && "Can not pop empty stack");
        return m_array[--m_length];
    }
    void print() {
        std::cout << "( ";
        for (int index = 0; index < m_length; ++index) std::cout << m_array[index] << " ";
        std::cout << ")" << '\n';
    }
};

int main(int argc, char const *argv[]) {
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}
