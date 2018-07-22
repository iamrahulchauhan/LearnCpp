#include <iostream>

bool isEven(int theNum){
  if(theNum % 2 == 0) return true;
  else return false;
}

int main(){
  int theNum{0};
  std::cout << "Enter a integer: ";
  std::cin >> theNum;
  if(isEven(theNum)) std::cout << "It is even." << '\n';
  else std::cout << "It is odd." << '\n';

  return 0;
}
