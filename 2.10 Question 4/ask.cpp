#include <iostream>
#include "ask.h"

double getHeight(){
  double theHeight;
  std::cout << "Enter the initial height of the tower in meters: ";
  std::cin >> theHeight;
  return theHeight;
}
