#include <iostream>
#include "squarelib.hpp"

int main() {
  Rectangle r;
  r.set_width_height(3.0,4.0);
  std::cout << r.get_area() << std::endl;
  Square s;
  s.set_side_len(2.0);
  std::cout << s.get_area() << std::endl;
  s.scale(3.0);
  std::cout << s.get_area() << std::endl;

}
