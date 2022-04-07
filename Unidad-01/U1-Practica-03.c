#include <stdio.h>
#include <stdlib.h>

/*3- Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.*/

int main()
{
    int l1;
    int l2;
    int l3;
    int perim;

    printf("Ingrese un numero entero para el lado 1 del triangulo\n");
    scanf("%d", &l1);
    printf("Ingrese un numero entero para el lado 2 del triangulo\n");
    scanf("%d", &l2);
    printf("Ingrese un numero entero para el lado 3 del triangulo\n");
    scanf("%d", &l3);
    
    perim=l1+l2+l3;
    
    printf("El perimetro del triangulo es igual a: %d", perim);
    printf("\n");
    system("pause");
}