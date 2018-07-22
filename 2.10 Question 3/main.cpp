#include <iostream>

double readValue(){
  double theValue{-999.};
  std::cout << "Enter a double value: ";
  std::cin >> theValue;
  return theValue;
}

char readChar(){
  char theChar{48};
  std::cout << "Enter one of the following: +, -, *, or /: ";
  std::cin >> theChar;
  return theChar;
}

void printAnswer(double value1, double value2, char theChar){
  if(theChar == 43){
    std::cout << value1 << " " << theChar << " " << value2 << " " << "is" << " " << value1 + value2 << '\n';
  }
  else if(theChar == 45){
    std::cout << value1 << " " << theChar << " " << value2 << " " << "is" << " " << value1 - value2 << '\n';
  }
  else if(theChar == 42){
    std::cout << value1 << " " << theChar << " " << value2 << " " << "is" << " " << value1 * value2 << '\n';
  }
  else if(theChar == 47){
    std::cout << value1 << " " << theChar << " " << value2 << " " << "is" << " " << value1 / value2 << '\n';
  }
}

int main(){
  double value1 = readValue();
  double value2 = readValue();
  char theChar = readChar();
  printAnswer(value1, value2, theChar);

  return 0;
}
