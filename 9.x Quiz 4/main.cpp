#include "FixedPoint2.h"
#include <iostream>

void testAddition() {
	// h/t to reader Sharjeel Safdar for this function
	std::cout << std::boolalpha;
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.23) == FixedPoint2(1.98)) << '\n'; // both positive, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.50) == FixedPoint2(2.25)) << '\n'; // both positive, with decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.23) == FixedPoint2(-1.98)) << '\n'; // both negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.50) == FixedPoint2(-2.25)) << '\n'; // both negative, with decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.23) == FixedPoint2(-0.48)) << '\n'; // second negative, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.50) == FixedPoint2(-0.75)) << '\n'; // second negative, possible decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.23) == FixedPoint2(0.48)) << '\n'; // first negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.50) == FixedPoint2(0.75)) << '\n'; // first negative, possible decimal overflow
}

int main() {
//  Quiz 4b
	FixedPoint2 b_a(34, 56);
	std::cout << b_a << '\n';
 
	FixedPoint2 b_b(-2, 8);
	std::cout << b_b << '\n';
 
	FixedPoint2 b_c(2, -8);
	std::cout << b_c << '\n';
 
	FixedPoint2 b_d(-2, -8);
	std::cout << b_d << '\n';
 
	FixedPoint2 b_e(0, -5);
	std::cout << b_e << '\n';
 
	std::cout << static_cast<double>(b_e) << '\n';
 
//  Quiz 4c
    FixedPoint2 c_a(0.01);
	std::cout << c_a << '\n';
 
	FixedPoint2 c_b(-0.01);
	std::cout << c_b << '\n';
 
	FixedPoint2 c_c(5.01); // stored as 5.0099999... so we'll need to round this
	std::cout << c_c << '\n';
 
	FixedPoint2 c_d(-5.01); // stored as -5.0099999... so we'll need to round this
	std::cout << c_d << '\n';
    
//  Quiz 4d
    testAddition();
 
	FixedPoint2 d_a(-0.48); 
	std::cout << d_a << '\n';
 
	std::cout << -d_a << '\n';
 
	std::cout << "Enter a number: "; // enter 5.678
	std::cin >> d_a;
	
	std::cout << "You entered: " << d_a << '\n';
 
    system("pause");
	return 0;
}