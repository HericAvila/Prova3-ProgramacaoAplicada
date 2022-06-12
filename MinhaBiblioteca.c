#include "MinhaBiblioteca.h"
#include <stdlib.h>
#include <stdio.h>

void MaiorMenor(int *numero,int tamanho, int a, int b){

// inicializando atribuindo o primeiro valor de numero[] para max e min 
int max=numero[0];
int min=numero[0];

for(int i=0; i<tamanho; i++)
{
  if(*(numero+i)>max) // caso *(numero+i) seja maior que o valor anterior max assume o valor de *(numero+i)
  {     
    max=*(numero+i);    
  }
  else if(*(numero+i)<min) // caso *(numero+i) seja menor que o valor anterior max assume o valor de *(numero+i)
  {
    min=*(numero+i);    
  }
}

// Passando o valor de Max e Min para as variaveis a e b
int *ponteiroExternoMax;
ponteiroExternoMax = a;
*ponteiroExternoMax = max;
int *ponteiroExternoMin;
ponteiroExternoMin = b;
*ponteiroExternoMin = min;
     
}