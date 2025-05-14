#include <iostream>
#include <ostream>
int main() {
  int favorite;
  std::cout << "Enter your favorite number between 1 to 100" << std::endl;
  std::cin >> favorite;
  std::cout << "Amazing! That is my favorite number too!" << std::endl;
  std::cout << "No really " << favorite << " is my favorite number too!";
  return 0;
}
