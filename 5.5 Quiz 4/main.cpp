#include <iostream>

int main() {
    int iii{1};
    while (iii <= 5) {
        int jjj{5};
        while (jjj > 0) {
            if (jjj > iii) std::cout << "  ";
            else std::cout << jjj << " ";
            --jjj;
        }
        std::cout << '\n';
        ++iii;
    }

    return 0;
}
