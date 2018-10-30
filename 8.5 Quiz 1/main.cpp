#include <iostream>
#include <string>

class Ball {
private:
    std::string m_color;
    double m_radius;
public:
    Ball(double radius = 10.) {
        m_color = "black";
        m_radius = radius;
    }
    Ball(const std::string &color, double radius = 10.) {
        m_color = color;
        m_radius = radius;
    }

    void print() {
        std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
    }
};

int main(int argc, char const *argv[]) {
    Ball def;
    def.print();

    Ball blue("blue");
    blue.print();

    Ball twenty(20.0);
    twenty.print();

    Ball blueTwenty("blue", 20.0);
    blueTwenty.print();

    return 0;
}
