// Copyright 2026
#define EASY_EXAMPLE
#ifdef EASY_EXAMPLE

#include <iomanip>
<<<<<<< HEAD
#include <iostream>

#include "../lib_algorithms/algorithm.h"
=======
#include "../lib_algoritms/algoritms.h"
>>>>>>> 1942c50908a578b101004428a2ad8b787f9a4662

int main() {
  int a, b;
  float result;

  a = 1;
  b = 4;

  try {
    result = division(a, b);
    std::cout << a << " / " << b << " = " << std::setprecision(2) << result
              << std::endl;
  } catch (std::exception err) {
    std::cerr << err.what() << std::endl;
  }

  a = 1;
  b = 0;

  try {
    result = division(a, b);
    std::cout << a << " / " << b << " = " << std::setprecision(2) << result
              << std::endl;
  } catch (std::exception err) {
    std::cerr << err.what() << std::endl;
  }
  return 0;
}

#endif  // EASY_EXAMPLE
