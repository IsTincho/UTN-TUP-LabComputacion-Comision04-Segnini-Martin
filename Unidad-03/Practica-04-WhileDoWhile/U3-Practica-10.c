#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación:
*/

int main()
{
    float n1, n2;
    int menu, contador;
    float sum,rest,mult,div;
    contador=0;
    printf("Ingrese el primer numero: \n");
    scanf("%f", &n1);
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &n2);

    sum=n1+n2;
    rest=n1-n2;
    mult=n1*n2;
    div=n1*n2;

    printf("Presione uno de los numeros para interactuar con el menu: \n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\n");

    do
    {
        scanf("%i", &menu);

        switch (menu)
        {
        case 1:
            printf("La suma de los numeros ingresados es: %f\n", sum);
            break;
        case 2:
            printf("La resta de los numeros ingresados es: %f\n", rest);
            break;
        case 3:
            printf("La multiplicacion entre los numeros ingresados es: %f\n", mult);
            break;
        case 4:
            printf("La division entre los numeros ingresados es: %f\n", div);
            break;
        case 5:
            printf("La cantidad de movimientos ingresados es de: %i\n", contador);
            break;
        case 6:
            printf("Usted ha decidido salir del programa. Cerrando...\n");
            break;
    
        default:
            printf("Ha ingresado un numero no valido, vuelva a intentar...\n");
            break;
        }
        contador+=1;
    } while (menu!=6);
    
  system("pause");
}