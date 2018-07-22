#include <iostream>

int readNumber();

void writeAnswer(int theNum);

int main(){
  writeAnswer(readNumber() + readNumber());

  return 0;
}
