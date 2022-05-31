#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array.
*/

void main()
{
    float array1[5], array2[5], distinto[10];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el valor del numero %i\n", i+1);
        scanf("%f", &array1[i]);
        distinto[i]=array1[i];
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el valor del numero %i\n", i+6);
        scanf("%f", &array2[i]);
        distinto[i+5]=array2[i];
    }
    
    for (i = 0; i < 10; i++)
    {
       printf("%.1f\n", distinto[i]);
    }
    
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/