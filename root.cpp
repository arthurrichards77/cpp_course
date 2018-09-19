#include <iostream>

int main() {

  double f=144.0; // find root of this value

  // initialize bounds
  double lower_bound=1.0;
  double upper_bound=f;

  double r; // trial value for root

  // search until bounds closer than tolerance
  while (upper_bound-lower_bound>1e-6) {
    // update by bisection
    r = 0.5*(lower_bound+upper_bound);
    // upper bound if r-squared too big
    if (r*r>f) {
      upper_bound=r;
    } else {
      lower_bound=r;
    }
    // print progress
    std::cout << r << std::endl;
  }

  return(0);

}
