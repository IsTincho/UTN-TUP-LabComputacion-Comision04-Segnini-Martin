#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*7- Ingresar el valor de la hora y el tiempo trabajado por 
un comerciante, calcular su sueldo e imprimirlo
*/

int main()
{
    float vxh; //Valor x Hora
    float tT; //Tiempo trabajado
    float sueldo;

    
    printf("Ingrese el valor por hora ganado\n");
    scanf("%f", &vxh);
    printf("Ingrese el tiempo trabajado\n");
    scanf("%f", &tT);

    //Sueldo es igual al valor x hora y las horas trabajadas
    sueldo = vxh*tT;
    
    printf("El sueldo de los trabajadores es igual a: $%f\n", sueldo);

  system("pause");
}