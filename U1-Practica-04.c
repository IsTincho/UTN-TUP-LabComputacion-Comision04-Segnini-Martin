#include <stdio.h>
#include <stdlib.h>

/*4- Solicitar ingresar dos lados de un triángulo rectangulo y calcular: 
la hipotenusa, el perímetro, la superficie. 
Imprima los resultados de las operaciones solicitadas.
*/

int main()
{
    int l1, l2, H, perim, sup;

    printf("Ingrese un numero entero para el cateto 1\n");
    scanf("%d", &l1);
    printf("Ingrese un numero entero para el cateto 2\n");
    scanf("%d", &l2);
    
    H=(l1*l1)+(l2*l2);
    perim=l1+l2+H;
    sup=(l1*l2)/2;

    printf("La hipotenusa del triangulo es igual a: %d", H);
    printf("\n");
    printf("El perimetro del triangulo es igual a: %d", perim);
    printf("\n");
    printf("La superficie del triangulo es igual a: %d", sup);
    printf("\n");
    system("pause");
}