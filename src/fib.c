#include <stdio.h>
#include <math.h>
#include "fib.h"

unsigned long long int fib_recursivo(int n)
{
  if     (n <= 0)           return 0; // ERRO
  else if(n == 1 || n == 2) return 1; // fib(1) = fib(2) = 1
  else                      return fib_recursivo(n - 1) + fib_recursivo(n - 2);
}


unsigned long long int fib_iterativo(int n)
{
  if(n <= 0) return 0; // ERRO
  if(n == 1) return 1; // fib(1) = 1
  else       return (1 / sqrt(5)) * (
                    pow((1 + sqrt(5)) / 2, n
                ) - pow((1 - sqrt(5)) / 2, n)
              );
}








