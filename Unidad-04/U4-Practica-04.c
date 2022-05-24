#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*4. Dado el vector {10, 20, 5, 15, 30, 20}
- Informar el vector de la forma: "Indice: X, Valor: Y".
- Totalizar el vector e informar el total.
- Informar el contenido de las posiciones impares.
- Informar las posiciones que contienen números impares.
- Informar el mayor número.
- Informar cuántas veces aparece el número 20
*/

void main()
{
    int i, total;
    int vector[6]={10,20,5,15,30,20};
    total = 0;
    
    printf("El vector tiene la forma de: \n");
    for (i = 0; i < 6; i++)
    {
        //Calcular total
        printf("Indice: %i, Valor: %i\n", i+1, vector[i]);
        total+=vector[i];
        //Numeros en pos impares
        if (i%2)
        {
        }else{
            printf("\nEl numero en la posicion %i es %i\n", i+1, vector[i]);
        }
        //Numeros impares
        if (vector[i]%2)
        {
        }else{
            printf("\nEl numero %i se encuentra en la posicion impar: %i\n", vector[i], i+1);
        }
    }
    printf("El total del Vector es: %i", total);


    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/