#include <iostream>
#include <cmath>

int main() {

  double degs = 30.0;

  double res;

  res = sin(degs*M_PI/180.0);

  std::cout << res << std::endl;

  return(0);

}
