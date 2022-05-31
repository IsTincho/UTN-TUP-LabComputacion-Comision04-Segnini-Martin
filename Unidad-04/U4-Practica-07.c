#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio.
*/

void main()
{
    float sum = 0, prom = 0;
    int i, tam;

    printf("Ingrese la cantidad de notas a cargar\n");
    scanf("%i", &tam);
    float notas[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Ingrese la nota del alumno: %i\n", i+1);
        scanf("%f", &notas[i]);
        while (notas[i]<0||notas[i]>10)
        {
            printf("Error, nota invalida, vuelva a intentarlo\n");
            scanf("%f", &notas[i]);
        }
        sum+=notas[i];
    }
    prom=sum/tam;
    printf("El promedio de las notas es de: %.2f\n", prom);
    printf("Las notas suman un total de %.2f puntos.\n", sum);

  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/