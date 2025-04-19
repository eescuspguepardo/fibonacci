#include <stdio.h>
#include "fib.h"

int main()
{
  printf("\n***********************************\n");
  printf("Bem-Vindo ao calculador de Fibonacci\n");
  printf("***********************************\n");

  int n;
  do
  {
    printf("Digite o termo de fibonacci que deseja calcular:\nn = ");
    scanf("%d", &n);
    if(n <= 0) printf("O valor de n deve ser positivo, tente de novo...\n\n");
  } while (n <= 0);
  

  printf("\nAlgoritmo recursivo:\tF(n) = %llu\n", fib_recursivo(n));
  printf("Algoritmo iterativo:\tF(n) = %llu\n", fib_iterativo(n));

  printf("\n*****************\n");
  printf("Fim do programa...\n");
  printf("*****************\n");
  return 0;
}
