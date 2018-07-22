#include <iostream>
#include <string>

int main() {
  std::string theName{""};
  std::cout << "Enter your full name: ";
  std::getline(std::cin, theName);

  int theAge{0};
  std::cout << "Enter your age: ";
  std::cin >> theAge;

  std::cout << "You've lived " << static_cast<double>(theAge) / theName.length() << " years for each letter in your name." << '\n';

  return 0;
}
