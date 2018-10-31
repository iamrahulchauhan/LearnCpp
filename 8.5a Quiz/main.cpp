#include <iostream>
#include <cstdint>

class RGBA {
private:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;
public:
    RGBA(int red = 0, int green = 0, int blue = 0, int alpha = 255):
        m_red{0}, m_green{0}, m_blue{0}, m_alpha{255} {
    }

    void print() {
        std::cout << "r= " << static_cast<int>(m_red) << " g= " << static_cast<int>(m_green) <<
        " b= " << static_cast<int>(m_blue) << " a= " << static_cast<int>(m_alpha) << '\n';
    }
};

int main(int argc, char const *argv[]) {
    RGBA teal(0, 127, 127);
    teal.print();

    return 0;
}
