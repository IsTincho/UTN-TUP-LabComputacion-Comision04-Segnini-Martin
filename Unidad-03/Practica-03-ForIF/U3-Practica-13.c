#include <stdio.h>
#include <stdlib.h>

/*13. Imprimir por consola 10 renglones, de manera que se visualice 
la siguiente salida:
@@@@@@@@@@
@@@@@@@@@
@@@@@@@@
...
*/

void main()
{
    int i, j;

    for (i = 10; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("@");
        }
            printf("\n");
    }
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/