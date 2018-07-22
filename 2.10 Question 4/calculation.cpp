#include <iostream>
#include <cmath>
#include "constant.h"
#include "calculation.h"

void calculateHeight(double initHeight){
  int theTime = timeCounter();
  double fallenDistance = myConstant::gravity * pow(theTime, 2) / 2;
  if(initHeight - fallenDistance <= 0){
    std::cout << "At " << theTime << " seconds, the ball is on the ground." << '\n';
  }
  else{
    std::cout << "At " << theTime << " seconds, the ball is at the height: " << initHeight - fallenDistance << '\n';
    calculateHeight(initHeight);
  }
}

int timeCounter(){
  static int theTime{0};
  return theTime++;
}
