#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*14. Diseñar e implementar un programa que solicite a su usuario un valor no negativo n y
visualice la siguiente salida:
1 2 3.....n-1 n
1 2 3....n-1
... ... ... 
1 2 3
1 2
1
*/

void main()
{
    int n, i, j;

    printf("Ingrese un numero entero no negativo\n");
    scanf("%i", &n);

    if(n>0){

     for (i = n; i >= 1; i--)
     {
       for (j = 1; j <= i; j++)
       {
        printf("%i ",j);
       }
       
       printf("\n");
     }
    }

  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/