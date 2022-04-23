#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*3. Pedir al usuario que ingrese 10 números reales, validar 
que los mismos sean valores positivos, si el usuario ingresa 
un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). 
Informar al usuario la suma de los 10 números ingresados.
*/

void main()
{
    int i;
    int num, sum;
    sum=0;
    
    printf("Ingrese 10 numeros reales.\n");
    for (i = 1; i <= 10; i++)
    {
        scanf("%i", &num);
        if(num<=0){
            while (num<=0)
            {
                printf("Error, el numero ingresado es negativo o nulo.\n"); 
                printf("Intente nuevamente\n");
                scanf("%i", &num);
            }
            sum=sum+num;
        }else{
            sum=sum+num;
        }
    }
    printf("La suma de los numeros ingresados es: %i\n", sum);
    
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/