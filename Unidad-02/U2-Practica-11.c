#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*11- Pedir al usuario que ingrese dos números (permitir ingresar número
con decimales). Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa 
la opción 5 el programa debe terminar.
*/

int main()
{
    float n1, n2;
    int menu;
    float sum,rest,mult,div;

    printf("Ingrese el primer numero: \n");
    scanf("%f", &n1);
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &n2);

    sum=n1+n2;
    rest=n1-n2;
    mult=n1*n2;
    div=n1*n2;

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
      printf("Usted ha decidido salir del programa. Cerrando...\n");
      break;
    
    default:
     printf("Ha ingresado un numero no valido, saliendo del programa...\n");
      break;
    }
    
  system("pause");
}