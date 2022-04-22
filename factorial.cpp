#include "factorial.h"

// implementacion -> archivo factorial.cpp
double factorial(double m)
{
  if(m <= 1)return 1;
  return m*factorial(m-1);
}
