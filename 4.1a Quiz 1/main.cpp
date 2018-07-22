#include <iostream>

int main() {
  int smallInt{0};
  int largeInt{0};
  std::cout << "Enter an integer: ";
  std::cin >> smallInt;
  std::cout << "Enter a larger integer: ";
  std::cin >> largeInt;

  if (smallInt > largeInt) {
    std::cout << "Swapping the values" << '\n';
    int tempNum{smallInt};
    smallInt = largeInt;
    largeInt = tempNum;
  }

  std::cout << "The smaller value is " << smallInt << '\n';
  std::cout << "The larger value is " << largeInt << '\n';

  return 0;
}
