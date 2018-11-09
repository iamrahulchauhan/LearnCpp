#ifndef TEMP_H
#define TEMP_H

class Humidity;

class Temperature {
private:
    int m_temp{0};
public:
    Temperature (int temp): m_temp{temp} {
    }

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

#endif
