#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*9. Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.
*/

void main()
{
    int i,num,l;
    
      for (i = 1; i < 10; i++)
      {
          printf("****** TABLA DEL: %i ******\n", i);
        for (l = 1; l <= 10; l++)
        {
          num=l;
          printf("%i x %i = %i\n", i, l, num*i);
        } 
        printf("\n");
      }  
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/