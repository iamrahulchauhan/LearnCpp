#include <iostream>
#include "Advertise.h"

void printAdInfo(Advertise ad) {
    std::cout << "The numbers of ads you've shown to readers: " << ad.adNum << '\n';
    std::cout << "The percentage of ads were clicked on by users: " << ad.adPer << '\n';
    std::cout << "The money you earned on average from each ad that was clicked: " << ad.adEarn << '\n';
    std::cout << "How much you made for the day is: " << ad.adNum * ad.adPer * ad.adEarn << '\n';
}
