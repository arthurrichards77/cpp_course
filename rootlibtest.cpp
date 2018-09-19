#include <iostream>
#include "rootlib.hpp"

int main() {

  double f;
  double r;

  f = 2.0;
  r = root(f);
  std::cout << "The square root of " << f << " is: " << std::endl;
  print_num(r);

  return(0);
}
