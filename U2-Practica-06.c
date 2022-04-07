#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*6- Leer una nota de un alumno por consola e informar la condición del 
mismo. (menor que 4: Reprobado, menor que 6: Regular, mayor o 
igual que 6: Promocionado). Validar que la nota ingresada se encuentre 
entre el 0 y el 10, de lo contrario informar “Nota inválida”.
*/

int main()
{
    
    int nota;

    printf("Ingrese la nota del alumno: \n");
    scanf("%i", &nota);

    if(nota>=6){
        printf("El alumno se encuentra en condicion de Promocion\n");
    }else if(nota>=4 && nota<6){
        printf("El alumno se encuentra en condicion Regular\n");
    }else if(nota<4){
        printf("El alumno se encuentra Reprobado.\n");
    }
    
  system("pause");
}