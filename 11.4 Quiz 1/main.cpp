#include <iostream>
#include "FruitApple.h"
#include "FruitBanana.h"

int main() {
	const Apple a("Red delicious", "red", 4.2);
	std::cout << a;
 
	const Banana b("Cavendish", "yellow");
	std::cout << b;
 
    system("pause");
	return 0;
}