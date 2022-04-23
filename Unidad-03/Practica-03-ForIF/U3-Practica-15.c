#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.
*/

void main()
{
    int cAlumnos, promA, promG, nota;
    int i, j;

    cAlumnos=5;
    promA=0;
    promG=0;

    for (i = 1; i <= 5; i++)
    {
        promA=0;
        printf("***** ALUMNO NRO %i *****\n", i);

      for ( j = 1; j <= 3; j++)
      {
    
          printf("Ingrese la nota nro %i del alumno %i: \n", j, i);
          scanf("%i", &nota);
          promA=promA+nota;
              
      }
        promA=promA/3;
        printf("Promedio del Alumno nro %i es de: %i \n", i, promA);
        promG=promG+promA;
    }
    
    promG=promG/cAlumnos;
    printf("El promedio general es: %i \n", promG);
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/