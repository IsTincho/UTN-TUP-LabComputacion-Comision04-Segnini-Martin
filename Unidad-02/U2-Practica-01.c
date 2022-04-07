#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*1- Ingresar por teclado dos números, determinar cuál es el mayor y 
visualizarlo en pantalla.
*/


int main()
{
  
    float num1,num2;

    printf("Ingrese el valor del primer numero\n");
    scanf("%f", &num1);
    printf("Ingrese el valor del segundo numero\n");
    scanf("%f", &num2);


    if(num1>num2)
    {
        printf("El numero de mayor valor es: %.2f", num1);
    }else{
        printf("El numero de mayor valor es: %.2f", num2);
    }
    
  printf(" \n");
  system("pause");
}