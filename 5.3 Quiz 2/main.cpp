#include <iostream>
#include "animal.h"

int main() {
    Animal cat{Animal::CAT};
    Animal chicken{Animal::CHICKEN};
    printNumOfLegs(cat);
    printNumOfLegs(chicken);

    return 0;
}
