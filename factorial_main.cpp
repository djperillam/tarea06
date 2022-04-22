#include "factorial.h"
#include <iostream>
#include <cstdlib>

// funcion main: archivo factorial_main.cpp
int main(int argc,char*argv[])
{
  const double n = std::atoi(argv[1]);
  std::cout << factorial(n) << "\n";
  return 0;
}
