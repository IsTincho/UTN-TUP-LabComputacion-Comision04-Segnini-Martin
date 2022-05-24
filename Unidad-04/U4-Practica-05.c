#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
5. Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
- Informar la inflación anual
- Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
- Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9
*/

void main()
{
    char *meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float total, menor, mayor; 
    int i;
    
    total=0;
    menor=inflacion[0];
    mayor=inflacion[0];

    for (i = 0; i < 12; i++)
    {
        if (inflacion[i] > mayor){
            
            mayor = inflacion[i];

        }else if (inflacion[i] < menor){
            
            menor = inflacion[i];
        
        }
        total=total+inflacion[i];
    }

    printf("La inflacion anual es de: %.1f puntos\n", total);
    for (i = 0; i < 12; i++)
    {
        if (menor==inflacion[i])
        {
            printf("El mes con mayor inflacion fue: %s con un total de %.1f puntos\n", meses[i],inflacion[i]);
        }
        if (mayor==inflacion[i])
        {
            printf("El mes con menor inflacion fue: %s con un total de %.1f puntos\n", meses[i],inflacion[i]);
        }
    }    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/