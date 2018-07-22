#include <iostream>

int readNumber(){
  int theNum;
  std::cout << "Enter a number: ";
  std::cin >> theNum;
  return theNum;
}

void writeAnswer(int theNum){
  std::cout << theNum << std::endl;
}

int main(){
  writeAnswer(readNumber() + readNumber());

  return 0;
}
