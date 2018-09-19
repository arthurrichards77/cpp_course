#include <iostream>
#include "rootlib.hpp"

void print_num(double n) {
  //just print the number on a line
  std::cout << n << std::endl;
}

double root(double f) {
  // find square root of f by bisection search

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
    print_num(r);
  }
  return(r);
}
