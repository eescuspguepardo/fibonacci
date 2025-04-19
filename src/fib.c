#include <stdio.h>
#include "fib.h"
#include <math.h>

int fib_recursivo(int n)
{
  if(n  == 1)
  {
    return 1; // fib(1) =  1
  }
  if(n == 2)
  {
    return 1; // fib(2) = 2
  }
  
  return fib_recursivo(n - 1) + fib_recursivo(n - 2);
}


int fib_iterativo(int n)
{
  if(n <= 0)
  {
    return 0; // Erro
  }
  if(n == 1)
  {
    return 1;
  }

  return (1 / sqrt(5)) * (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n));

}








