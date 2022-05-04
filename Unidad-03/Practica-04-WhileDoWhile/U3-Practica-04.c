#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.
*/

void main()
{
    int i,j;
    float promG, promA, nota, notaA, notaG;
    int cAlum, cParciales;

    promA=0;
    promG=0;
    notaA=0;

//Cantidad Alumnos
    printf("Ingrese la cantidad de alumnos en el Curso: \n");
    scanf("%i", &cAlum);
    while(cAlum<=0)
    {
        printf("Error, cantidad incorrecta de alumnos.\n");
        printf("Vuelva a ingresar un numero valido.\n");
        scanf("%i", &cAlum);
    }

//Cantidad Parciales    
    printf("Ahora ingrese la cantidad de parciales tomados en el Cuatrimestre: \n");
    scanf("%i", &cParciales);
    while(cParciales<=0)
    {
        printf("Error, los parciales no pueden ser menores a 1.\n");
        printf("Intente nuevamente.\n");
        scanf("%i", &cParciales);
    } 
    
//Cargar notas para cada alumno

    for (i = 1; i <= cAlum; i++)
    {
        for (j = 1; j <= cParciales; j++)
        {
            do
            {
            printf("Ingrese la nota del alumno %i para el parcial %i\n", j, i);
            scanf("%f", &nota);
            
            if ((nota>10)||(nota<0))
            {
                printf("ERROR, vuelva a intentarlo\n");
            }
            
            } while ((nota>10) || (nota<0));
            notaA=notaA+nota;
        }
        promA=notaA/cParciales;
        printf("El promedio del alumno %i es de: %.2f\n", i, promA);
        notaG=notaG+promA;
        promA=0;
        notaA=0;
    }
    
    promG=notaG/cAlum;
    printf("El promedio general de la clase es de: %.2f\n", promG);

  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/