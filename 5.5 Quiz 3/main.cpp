#include <iostream>

int main() {
    int iii{5};
    while (iii > 0) {
        int jjj{iii};
        while (jjj > 0) {
            std::cout << jjj << " ";
            --jjj;
        }
        std::cout << '\n';
        --iii;
    }

    return 0;
}
