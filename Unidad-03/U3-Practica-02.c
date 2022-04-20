#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*2. Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos.
*/

/*void main()
{
    int i, num;
    num=1;

    for (i=1; i <= 5; i++)
    {
        printf("%i\n", num);
        num=num+2;
    }
    
    
  system("pause");
}
*/
void main()
{
    int i;

    for (i=1; i <= 10; i+=2)
    {
        printf("%i\n", i);
      
    }
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/