#include "MinhaBiblioteca.h"
#include "MinhaBiblioteca.c"

#include <stdio.h>
#include <stdlib.h>



int main(void) {

  int maxFinal=0, minFinal=0;
  int a = &maxFinal; // varivel "a" recebe o endereco de um inteiro que ira armazenar o maior valor
  int b = &minFinal; // varivel "b" recebe o endereco de um inteiro que ira armazenar o menor valor
  int tamanho=0;
  printf("Digite o tamanho do vetor \n");
  scanf("%d", &tamanho);
  

  int numero[tamanho];

  printf("Digite os valores separados por 'enter'\n");
  for(int i=0;i<tamanho;i++)
  
  {
    scanf("%d",&numero[i]);
  }
  for(int i=0;i<tamanho;i++)
  {    
    printf("%d,",numero[i]); // Printando o vetor de numeros na tela
  }
  MaiorMenor(numero,tamanho, a, b);

  printf("\nMax =%d, min=%d\n",maxFinal,minFinal); // printando o maior e menor valor na tela
  
  return 0;
}