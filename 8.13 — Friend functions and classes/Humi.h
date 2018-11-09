#ifndef HUMI_H
#define HUMI_H

class Temperature;

class Humidity {
private:
    int m_humi{0};
public:
    Humidity (int humi): m_humi{humi} {
    }

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

#endif
