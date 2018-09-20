#include "squarelib.hpp"

void Square::set_side_len(double s_in) {
  // can't access h,w directly as they're private
  set_width_height(s_in,s_in);
}
