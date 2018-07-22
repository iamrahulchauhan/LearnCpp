#include <iostream>

int main() {
    using distance_t = double;
    using time_t = double;
    using velocity_t = double;
    distance_t position1{0};
    distance_t position2{0};
    time_t time1{0};
    time_t time2{0};
    std::cout << "Enter the initial position (m): ";
    std::cin >> position1;
    std::cout << "Enter the final position (m): ";
    std::cin >> position2;
    std::cout << "Enter the initial time (s): ";
    std::cin >> time1;
    std::cout << "Enter the final time (s): ";
    std::cin >> time2;
    velocity_t velocity = (position2 - position1) / (time2 - time1);
    std::cout << "The velocity is " << velocity << " (m/s)" << '\n';

    return 0;
}
