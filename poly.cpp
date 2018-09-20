#include "squarelib.hpp"
#include <vector>
#include <iostream>

int main() {

  std::vector<Rectangle> all_rects;
  std::vector<Rectangle>::iterator it;

  Rectangle r;
  r.set_width_height(2.0,3.0);
  all_rects.push_back(r);

  r.set_width_height(5.0,3.0);
  all_rects.push_back(r);

  Square s;
  s.set_side_len(3.0);
  all_rects.push_back(s);

  for (it = all_rects.begin(); it != all_rects.end(); ++it) {
    it->scale(2.0);
    std::cout << it->get_area() << std::endl;
  }

  return(0);

}
