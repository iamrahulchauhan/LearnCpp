#include <iostream>
#include <vector>

int main() {
    std::vector<int> v {0, 1};
    int nFib {13};
    for (int index {0}; index < (nFib - 2); ++index) {
        v.push_back(v[index] + v[index + 1]);
    }
    for (int index {0}; index < nFib; ++index) {
        std::cout << v[index] << ' ';
    }

    return 0;
}
