#include <stdio.h>
#include <stdlib.h>

//2- Ingresar 3 valores enteros, sumarlos e imprimir esta suma

int main()
{
    int n1;
    int n2;
    int n3;
    int sum;
    printf("Ingrese un numero entero\n");
    scanf("%d", &n1);
    printf("Ingrese un numero entero\n");
    scanf("%d", &n2);
    printf("Ingrese un numero entero\n");
    scanf("%d", &n3);
    sum=n1+n2+n3;
    printf("La suma de los numeros ingresados es igual a: %d", sum);
    printf("\n");
    system("pause");
}