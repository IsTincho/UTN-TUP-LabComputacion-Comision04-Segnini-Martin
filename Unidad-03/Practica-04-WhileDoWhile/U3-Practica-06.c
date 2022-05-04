#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.
*/

void main()
{
    
    float nota, suma, promedio;
    int basta = 0;
    int can=0;

    suma=0;
    promedio=0;

    do
    {
        printf("Ingrese la nota numero %i.\n", can+1);
        scanf("%f", &nota);
        can+=1;
        suma=suma+nota;

        printf("Desea ingresar mas notas?\n");
        printf("Ingresar 1 para SI, 0 para NO\n");
        scanf("%i", &basta);
        while (basta>1 || basta<0)
        {
            printf("ERROR, ingrese 1 o 0\n");
            scanf("%i", &basta);
        }
        
        if (basta==0)
        {
            promedio=suma/can;
            printf("El promedio es: %.2f\n", promedio);
        }
        

    } while (basta==1);
    

  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/