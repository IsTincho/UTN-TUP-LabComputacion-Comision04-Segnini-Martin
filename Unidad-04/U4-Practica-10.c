#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal
*/

void main()
{
    //initialize
    int n1, i, j;
    printf("Ingrese la cantidad de filas: \n");
    scanf("%i", &n1);
    float matriz[n1][n1], sumDiagonal;
    sumDiagonal=0;
    
    //Datos
    printf("Ingrese los numeros en la matriz cuadradada %ix%i\n", n1, n1);
    for (size_t i = 0; i < n1; i++)
    {
      for (j = 0; j < n1; j++)
      {
        scanf("%f", &matriz[i][j]);
      }
    }
    
    //Operacion
    for (size_t i = 0; i < n1; i++)
    {
      printf("{");
      for (j = 0; j < n1; j++)
      {
        printf("\t%.1f\t", matriz[i][j]);
        if (i==j)
        {
          sumDiagonal=sumDiagonal+matriz[i][j];
        }
        
      }
      printf("}\n");
    }
    
  //Final
  printf("La suma de la diagonal principal es: %.2f\n", sumDiagonal);
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/