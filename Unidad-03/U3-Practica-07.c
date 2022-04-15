#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*7. Diseñe un algoritmo que sume los 20 primeros números impares
*/

void main()
{
    int i, num, acum;
    num=1;
    acum=1;

    for (i = 1; i <= 10; i++)
    {
        num=2*i+1;
        acum=acum+num;
    }
     
     printf("La suma de los primeros 20 numeros impares da por resultado: %i\n", acum);

    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/