#include <stdio.h>
#include "fib.h"

int main()
{
  printf("\n***********************************\n");
  printf("Bem-Vindo ao calculador de Fibonacci\n");
  printf("***********************************\n");
  printf("Digite o termo de fibonacci que deseja calcular:\nn = ");

  int n;
  scanf("%d", &n);

  printf("Algoritmo recursivo:\nF(n) = %d\n", fib_recursivo(n));
  printf("Algoritmo iterativo:\nF(n) = %d\n", fib_iterativo(n));

  printf("\n****** Fim do programa...\n******\n");
  
  return 0;
}
