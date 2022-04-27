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

void main()
{
    int dni = 38632584;
    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    
    float nota = 7;

    printf("Ingrese el dni del alumno.\n");
    scanf("%i", &dniIngresado);
    
    do
    {
        if (dniIngresado!=dni)
        {
            printf("Error, intente nuevamente\n");
            printf("Le quedan %i intentos\n", 3-intentos);
            intentos+=1;
            scanf("%i", &dniIngresado);
        }else{
            printf("%i.\n", ingresaCorrectamente);
            ingresaCorrectamente=1;
        }
        
    } while (intentos<=3 && dniIngresado!=dni);
    
    if(ingresaCorrectamente==1 || intentos<3){
        printf("Nota: %.2f", nota);
    }
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/