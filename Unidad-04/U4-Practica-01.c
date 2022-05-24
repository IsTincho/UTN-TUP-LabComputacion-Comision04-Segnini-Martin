#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.
*/

void main()
{
    int arreglo[5];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        arreglo[i]= rand() % 10 + 1;
        printf("Indice: %i, Valor: %i\n", i+1, arreglo[i]);
    }

  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/