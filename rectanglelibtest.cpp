#include <iostream>
#include "rectanglelib.hpp"

int main() {
  Rectangle r;
  // can't access h and w directly from outside
  // r.w = 3.0 will fail
  r.set_width_height(3.0,4.0);
  std::cout << r.get_area() << std::endl;
  r.scale(2.0);
  std::cout << r.get_area() << std::endl;
}
