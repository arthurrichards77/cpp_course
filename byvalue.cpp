#include <iostream>

void set_to_two(int n) {
  // set value to two
  std::cout << "Func start: n=" << n << std::endl;
  n = 2;
  std::cout << "Func end: n=" << n << std::endl;
}

int main() {

  int a=7;

  std::cout << "Main start: a=" << a << std::endl;

  set_to_two(a);

  std::cout << "Main end: a=" << a << std::endl;

  return(0);
}
