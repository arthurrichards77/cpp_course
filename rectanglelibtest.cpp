#include <iostream>
#include "rectanglelib.hpp"

int main() {
  Rectangle r;
  r.set_width_height(3.0,4.0);
  std::cout << r.get_area() << std::endl;
  r.scale(2.0);
  std::cout << r.get_area() << std::endl;
}
