#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*10. Imprimir por consola 10 veces el carácter @, de manera que se visualice la siguiente
salida:
@
@
*/

void main()
{
    int i;
    
    for (size_t i = 1; i <= 10; i++)
    {
        printf("@\n");
    }
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/