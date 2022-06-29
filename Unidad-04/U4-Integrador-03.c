#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*
Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10.
La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.
La opción 4 debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5.
*/

void main()
{
    int cAlum=5, op=0;
    float lista[2][cAlum]; //Arreglo bidimensional
    float vDNI, vNota; //Variables para validar
    int bDNI, posDNI;
    bool encontrado=false;
    int i,j; //Para el for
    
  do
  {
    printf("1. Cargar Alumnos\t2. Buscar un alumno\t3. Modificar la nota de un alumno\t4. Mostrar un listado de los 10 alumnos\t5. Salir");
    scanf("%i", &op);
    switch (op)
    {
    case 1:
        printf("Carga de datos datos de los 10 alumnos.\n");

        for (i = 0; i < cAlum; i++)
        {
            printf("Ingrese el DNI para el alumno %i.\n", i+1);
            scanf("%f", &vDNI);

            while (vDNI<1000000 || vDNI>99999999)
            {
            printf("Error. DNI Invalido.\n");
            scanf("%f", &vDNI);
            }
        
            lista[0][i]=vDNI;
        }

        for (j = 0; j < cAlum; j++)
        {
            printf("Ingrese la nota para el alumno %i.\n", j+1);
            scanf("%f", &vNota);

            while (vNota<0 || vNota>10)
            {
            printf("Error. Nota Invalida.\n");
            scanf("%f", &vNota);
            }
        
            lista[1][j]=vNota;
        }
        break;
    case 2:
        do
        {
            printf("Ingrese el DNI del alumno a buscar.\n");
            scanf("%f", bDNI);
            for (i = 0; i < cAlum; i++)
            {
                if (bDNI==lista[0][i])
                {
                    posDNI=i;
                    encontrado=true;
                    i=cAlum;
                    
                }else{
                    encontrado=false;
                } 
            }
            
        } while (encontrado==false);

        printf("La nota del alumno DNI: %f es de: %.2f puntos.", lista[0][posDNI], lista[1][posDNI]);
        encontrado=false;
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    
    default:
        printf("Error, vuelva a intentarlo.\n");
        break;
    }
  } while (op<1||op>5);
    



    
    


    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/