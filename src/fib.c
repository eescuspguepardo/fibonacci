#include <stdio.h>
#include <fib.h>

int fib_recursivo(int n)
{
  if(n  == 1)
  {
    return 1; // fib(1) =  1
  }
  if(n == 2)
  {
    return 2; // fib(1) + fib(2) = 1 + 1 = 2
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

  // Terminar de implementar versão iterativa
  int fib_n = 0;
  int fib_n_1 = 1;
  int fib_n_2 = 1;
  for(int i = 0; i < n; i++)
  {
    fib = fib_n_1 + fib_n_2;
    fib_n_1 = fib_n_2;
  }
}








