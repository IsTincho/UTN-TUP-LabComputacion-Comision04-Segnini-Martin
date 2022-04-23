#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*6. Suma de los 10 primeros números múltiplos de tres.
*/

void main()
{
    int i, num, sum,acum;
    num=1;
    acum=0;

    for (i = 1; i <= 10; i++)
    {
        sum=num*3;
        acum=acum+sum;
        num=num+1;
    }
     
     printf("La suma de los 10 primeros multiplos de 3 es: %i\n", acum);

    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/