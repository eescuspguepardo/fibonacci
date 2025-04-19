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
    scanf(" %d", &n);
    if(n <= 0) printf("O valor de n deve ser positivo, tente de novo...\n\n");
  } while (n <= 0);

  printf("Qual versao do fibonacci voce quer,\no recursivo, o iterativo ou os dois? [r/i/2]\n");
  char opc;
  
  do
  {
    scanf(" %c", &opc);
    if     (opc == 'r') printf("\nAlgoritmo recursivo:\tF(n) = %llu\n", fib_recursivo(n));
    else if(opc == 'i') printf("Algoritmo iterativo:\tF(n) = %llu\n", fib_iterativo(n));
    else if(opc == '2')
    {
      printf("\nAlgoritmo recursivo:\tF(n) = %llu\n", fib_recursivo(n));
      printf("Algoritmo iterativo:\tF(n) = %llu\n", fib_iterativo(n));
    }
    else 
    {// ERRO
      printf("A opcao escolhida eh invalida, tente novamente...\n");  
      opc = '!';
    }
  } while (opc == '!');
  
  printf("\n*****************\n");
  printf("Fim do programa...\n");
  printf("*****************\n");
  return 0;
}
