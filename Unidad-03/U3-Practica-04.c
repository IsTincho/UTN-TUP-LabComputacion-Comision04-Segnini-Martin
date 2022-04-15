#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*4. Imprimir la suma de los números impares que se encuentran entre los números 1 y 10
*/

void main()
{
    int i, num, acum;
    num=1;
    acum=1;

    for (i = 1; i <= 4; i++)
    {
        num=2*i+1;
        acum=acum+num;
    }
     
     printf("La suma de los numeros impares entre 1 y 10 da por resultado: %i\n", acum);

    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/