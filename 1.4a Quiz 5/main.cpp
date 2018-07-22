#include <iostream>

int doubleNumber(int input){
  return 2 * input;
}

int main(){
  int input;
  std::cout << "Enter an input integer: ";
  std::cin >> input;
  std::cout << doubleNumber(input) << std::endl;

  return 0;
}
