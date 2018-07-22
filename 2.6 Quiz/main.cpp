#include <iostream>

int main(){
  int input;
  std::cout << "Enter a single digit integer: " << '\n';
  std::cin >> input;

  if(input == 2 || input == 3 || input == 5 || input == 7){
    std::cout << "The digit is prime." << '\n';
  }
  else{
    std::cout << "The digit is not prime." << '\n';
  }

  return 0;
}
