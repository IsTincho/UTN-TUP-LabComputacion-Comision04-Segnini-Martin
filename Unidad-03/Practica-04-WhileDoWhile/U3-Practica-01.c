#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*1. Imprimir en la consola los números del 1 al 100.
*/

void main()
{
    int n=1;
    while (n<=100)
    {
      printf("%i ", n);
      n+=1;
    }
    
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/