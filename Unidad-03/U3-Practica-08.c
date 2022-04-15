#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del
número.
*/

void main()
{
    int i,num;
    printf("Ingrese un numero para mostrar su tabla de multiplicar\n");
    scanf("%i", &num);

    for (size_t i = 0; i < 11; i++)
    {
        printf("%i x %i = %i\n", num, i, num*i);
    }
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/