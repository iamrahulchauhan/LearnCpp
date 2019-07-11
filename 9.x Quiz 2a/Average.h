#ifndef AVERAGE_H
#define AVERAGE_H

#include <cstdint>
#include <iostream>

class Average {
private:
    std::int32_t m_sum{0};
    std::int8_t m_count{0};

public:
    Average();
    ~Average();
    
    Average& operator+=(const int number);
    friend std::ostream& operator<<(std::ostream &out, const Average &avg);
};

#endif