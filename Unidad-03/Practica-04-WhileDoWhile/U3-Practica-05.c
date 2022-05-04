#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.
Trabajar con las siguientes variables:

 int dni = 38632584;
 float nota = 7;

 int dniIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0; 
*/

int main()
{
    int dni = 38632584;
    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    
    float nota = 7;

    do
    {
        printf("Ingrese el DNI del alumno.\n");
        scanf("%i", &dniIngresado);
        
        if (dniIngresado!=dni)
        {
            intentos+=1;
            printf("**ERROR** Te quedan: %i intentos\n", 4-intentos);
            if(intentos<=3){
                printf("Vuelve a intentarlo.\n");
            }else{
                printf("Se han terminado sus intentos...\n");
                printf("Cerrando programa.\n");
            }
        }else{
            ingresaCorrectamente=1;
            printf("La nota del alumno es: %.2f\n", nota);
        }
        

    } while (ingresaCorrectamente==0 && intentos<=3);
    
}


/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/