#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
9. Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array.
*/

void main()
{
    float array1[5], array2[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el valor del numero %i\n", i+1);
        scanf("%f", &array1[i]);
        array2[i]=array1[i]*2;
    }
    
    for (i = 0; i < 10; i++)
    {
       printf("%.1f\t", array2[i]);
    }
    
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/