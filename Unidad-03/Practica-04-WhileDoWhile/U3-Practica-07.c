#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.
*/

void main()
{
    
    int cont;
    float num;
    num=1;
    cont=0;

    printf("Ingrese la lista de numeros para determinar la cantidad de ellos.\n");
    printf("Para finalizar ingrese 0.\n");

    while (num!=0)
    {
      scanf("%f", &num);
      cont+=1;
    }

    printf("Ha ingresado un total de %i numeros\n", cont-1);
    

    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/