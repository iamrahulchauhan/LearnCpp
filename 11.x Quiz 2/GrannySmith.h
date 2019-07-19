#ifndef GRANNYSMITH_H
#define GRANNYSMITH_H

#include <string>
#include "Apple.h"

class GrannySmith : public Apple {
public:
    GrannySmith(std::string color = "green", std::string name = "granny smith apple");
    ~GrannySmith();
};

#endif