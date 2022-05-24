#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio
*/

void main()
{
    
    int array[5];
    int sum = 0;
    int i;
    float prom = 0;

    for (i = 0; i < 5; i++)
    {
        array[i]=rand() % 100 + 1;
        sum+=array[i];
    }
    prom=sum/5;
    printf("La suma de los componentes da:  %i y el promedio es de %.2f.\n", sum, prom);

    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/