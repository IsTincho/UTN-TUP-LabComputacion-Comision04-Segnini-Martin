#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*6- Ingresar dos valores, calcular su suma, su producto y la
resta del 1ro menos el 2do valor ingresado, imprimir los resultados
*/

int main()
{

    float n1, n2;
    float sum, prod, rest;

    
    printf("Ingrese el valor del numero 1\n");
    scanf("%f", &n1);
    printf("Ingrese el valor del numero 2\n");
    scanf("%f", &n2);

    sum=n1+n2;
    prod=n1*n2;
    rest=n1-n2;

    
    printf("La suma es igual a %f", sum);
    printf("\n");
    printf("El producto es igual a %f", prod);
    printf("\n");
    printf("La resta es igual a %f", rest);
    printf("\n");


  system("pause");
}