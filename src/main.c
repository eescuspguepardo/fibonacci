#include <stdio.h>
#include <time.h>
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

  printf("Qual versao do fibonacci voce quer,\n");
  printf("o Recursivo, o Iterativo ou os Dois? [r/i/2]\n");
  char opc;
  
  do
  {
    scanf(" %c", &opc);
    if     (opc == 'r') 
    {
      clock_t tempo = clock();
      printf("Algoritmo Recursivo: F(n) = %llu\n", fib_recursivo(n));
      tempo = clock() - tempo;
      double tempo_de_execucao = ((double) tempo) / CLOCKS_PER_SEC;
      printf("Tempo de execucao: %f segundos\n", tempo_de_execucao);
    }
    else if(opc == 'i') 
    {
      clock_t tempo;
      tempo = clock();
      printf("\nAlgoritmo Iterativo: F(n) = %llu\n", fib_iterativo(n));
      tempo = clock() - tempo;
      double tempo_de_execucao = ((double) tempo) / CLOCKS_PER_SEC;
      printf("Tempo de execucao: %f segundos\n", tempo_de_execucao);
    }
    else if(opc == '2')
    {
      clock_t tempo;
      tempo = clock();
      printf("\nAlgoritmo Iterativo: F(n) = %llu\n", fib_iterativo(n));
      tempo = clock() - tempo;
      double tempo_de_execucao = ((double) tempo) / CLOCKS_PER_SEC;
      printf("Tempo de execucao: %f segundos\n\n", tempo_de_execucao);
      
      tempo = clock();
      printf("Algoritmo Recursivo: F(n) = %llu\n", fib_recursivo(n));
      tempo = clock() - tempo;
      tempo_de_execucao = ((double) tempo) / CLOCKS_PER_SEC;
      printf("Tempo de execucao: %f segundos\n", tempo_de_execucao);
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
