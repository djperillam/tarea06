# include <iostream>
# include <cstdlib>
# include <cmath>

double factorial(double m); // declaración, archivo factorial.h

// funcion main: archivo factorial_main.cpp
int main(int argc,char*argv[])
{
  const double n = std::atoi(argv[1]);
  std::cout << factorial(n) << "\n";
  return 0;
}
// implementacion -> archivofactorial.cpp
double factorial(double m)
{
  if(m <= 1)return 1;
  return m*factorial(m-1);
}
