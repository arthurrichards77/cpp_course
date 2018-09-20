#include "rectanglelib.hpp"
#include <vector>
#include <iostream>

int main() {

  std::vector<Rectangle> all_rects;
  Rectangle r;
  int ii;

  r.set_width_height(2.0,3.0);
  all_rects.push_back(r);

  r.set_width_height(5.0,3.0);
  all_rects.push_back(r);

  std::cout << all_rects[0].get_area() << std::endl;
  std::cout << all_rects[1].get_area() << std::endl;

  for (ii=0; ii<all_rects.size(); ii++) {
    all_rects[ii].scale(2.0);
    std::cout << all_rects[ii].get_area() << std::endl;
  }

  return(0);

}
