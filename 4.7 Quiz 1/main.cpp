#include <iostream>
#include "Advertise.h"

int main() {
    Advertise ad;
    std::cout << "Enter how many ads you've shown to readers: ";
    std::cin >> ad.adNum;
    std::cout << "Enter what percentage of ads were clicked on by users: ";
    std::cin >> ad.adPer;
    std::cout << "Enter how much you earned on average from each ad that was clicked: ";
    std::cin >> ad.adEarn;
    printAdInfo(ad);

    return 0;
}
