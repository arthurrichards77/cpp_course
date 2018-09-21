#include "squarelib.hpp"
#include <vector>
#include <iostream>

int main() {


  std::vector<Rectangle> all_rects;
  Rectangle r;
  Square s;
  int ii;

  r.set_width_height(2.0,3.0);
  all_rects.push_back(r);

  r.set_width_height(5.0,3.0);
  all_rects.push_back(r);

  s.set_side_len(3.0);
  all_rects.push_back(s);

  for (ii=0; ii<all_rects.size(); ii++) {
    std::cout << all_rects[ii].get_area() << std::endl;
  }

  return(0);

}
