#include <stdio.h>
#include <fib.h>

int main()
{
  printf("\n******\nBem-Vindo ao calculador de Fibonacci\n******\n");
  printf("Digite o termo de fibonacci que deseja calcular:\n");

  int entrada_eh_valida = 0;
  int n;
  scanf("%d", &n);

  do 
  {
    printf("Qual forma deseja utilizar, recursiva ou iterativa? [r/i]\n");
    int char;
    if(char == 'r')
    {
      printf("Versao Recursiva: fib(n) = %d", fib_recursivo(n));
      entrada_eh_valida = 1;
    } else 
    {
      printf("Versao Iterativa: fib(n) = %d", fib_iterativo(n));
      entrada_eh_valida = 1;
    } else 
    {
      printf("Valor inserido eh invalido, tente novamente...\n");
      entrada_eh_valida = 0;
    }
  } while (entrada_eh_valida == 0);

  printf("\n****** Fim do programa...\n******\n");
  
  return 0;
}
