#include <iostream>
#include "main.h"
#include "Temp.h"
#include "Humi.h"

void printWeather(const Temperature &temperature, const Humidity &humidity) {
    std::cout << "Temp: " << temperature.m_temp << ", Humi: " << humidity.m_humi << '\n';
}

int main(int argc, char const *argv[]) {
    Temperature temp(35);
    Humidity humi{10};
    printWeather(temp, humi);

    return 0;
}
