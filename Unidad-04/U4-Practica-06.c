#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
- La facturación total
- El promedio de facturación
- La máxima facturación
- La mínima facturación
*/

void main()
{
    float facturacion[6]; 
    float tot = 0, prom = 0, mayor = 0, menor = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Ingrese la facturacion para el mes %i", i);
        scanf("%f", &facturacion[i]);
        
        if (facturacion[i] > mayor){
            
            mayor = facturacion[i];

        }else if (facturacion[i] < menor){
            
            menor = facturacion[i];
        
        }
        tot=tot+facturacion[i];
    }
    
    prom=tot/6;
    printf("La facturacion total es de: %.2f", tot);
    printf("La facturacion maxima es de: %.2f", mayor);
    printf("La facturacion minima es de: %.2f", menor);
    printf("La facturacion en promedio es de: %.2f", prom);
    
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/