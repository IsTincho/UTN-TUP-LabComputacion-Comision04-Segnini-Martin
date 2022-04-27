#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.
*/

void main()
{
    
    float nota=0;
    float sum=0;
    float prom=0;
    int pre;
    bool rep=true;

    printf("Desea comenzar a cargar notas?\n");
    printf("Ingrese 1 para comenzar. De lo contrario el programa finalizara.\n");
    scanf("%i", &pre);
    if(pre==1){
        do
        {
            scanf("%.2f", &nota);
            sum=sum+nota;
            prom+=1;
            printf("Desea cargar otra nota?\n");
            printf("Ingrese 1 para si, 2 para no.\n");
            scanf("%i", pre);
            if(pre==1)
            {
                rep=true;
            }else{
                rep=false;
            }
            
        } while (rep=false);
    }else{
        printf("Cerrando programa...\n");
    }


    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/