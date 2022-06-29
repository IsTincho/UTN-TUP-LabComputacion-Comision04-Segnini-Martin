#include <stdio.h>
#include <stdlib.h>

/*
    50,567 Segnini Martin
*/

int i;

int legajos[30]={0};
char nombres[30][50]={};
char apellidos[30][50]={};

float notas[30]={0};

const int tam = 30;

void cargarAlumnos();
void mostrarAlumnos();
void mostrarAlumnoNotaMayor();
void modificarNota();

void main() 
{
    int opcion = 0;
   
    do
    {
	    printf("\n1- Cargar los alumnos.");
	    printf("\n2- Modificar una nota.");
	    printf("\n3- Mostrar alumno que tiene mayor nota.");
	    printf("\n4- Listado de alumnos.\n");
        printf("\n5- Salir.\n\n");

        scanf("%d", &opcion);
        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    cargarAlumnos();
                    break;

                case 2: 
                    modificarNota();
                    break;

                case 3:                     
                    mostrarAlumnoNotaMayor();
                    break;

                case 4:                     
                    mostrarAlumnos();
                    break;

                default:
                    printf("\n--Opcion no encontrada, vuelva a intentar--\n");
                    break;
            }
    } 
    }while (opcion!=5);
            

 system("pause");
}

void cargarAlumnos()
{
    printf("\n--Ingrese los datos de los alumnos--\n");

	for(int i = 0; i < tam; i++)
    {
        
        printf("\nIngrese el legajo del alumno:");
        scanf("%i", &legajos[i]);
        while (legajos[i]<100000)
        {
            printf("\n--Error, intente nuevamente--\n");
            scanf("%i", &legajos[i]);
        }
        
        printf("Nombre del alumno:");	
		scanf("%s", &nombres[i]);
        
        printf("Apellido del alumno:");	
		scanf("%s", &apellidos[i]);
        
        printf("Ingrese la nota del alumno:");
        scanf("%f", &notas[i]);
        while (notas[i]<0||notas[i]>10)
        {
            printf("\n--Error, nota invalida, intente nuevamente--\n");
            scanf("%f", &notas[i]);
        }

       
	}
}

void modificarNota()
{
	int legajoMod;
    float nuevaNota;
    int encontrado = 0;

	printf("Legajo del alumno:");
	scanf("%d", &legajoMod);

    for (i = 0; i < tam; i++)
    {
        if (legajos[i]==legajoMod)
        {
            printf("\nAlumno encontrado, ingrese la nueva nota:\n");
            scanf("%f", &nuevaNota);
            while (nuevaNota<0||nuevaNota>10)
            {
                printf("\n--Error, nota invalida, intente nuevamente--\n");
                scanf("%f", &nuevaNota);
            }
            notas[i]=nuevaNota;
            encontrado=1;
        }  
    }

    if (encontrado==0)
    {
        printf("\nNo se ha encontrado al alumno de legajo: %i", legajoMod);
    }	
}

void mostrarAlumnoNotaMayor()
{
	int mayor=notas[0];
    int posicion=0;

    for (i = 0; i < tam; i++)
    {
        if (notas[i]>mayor)
        {
            mayor=notas[i];
            posicion=i;
        }
        
    }
    
    printf("Legajo: %i\tNota: %.2f\n", legajos[posicion],notas[posicion]);
	
}

void mostrarAlumnos()
{
    printf("\n--Listado de alumnos--\n");
    for (i = 0; i < tam; i++)
    {
        printf("\n--Alumno %i--\n", i);
        printf("Legajo: %i\t", legajos[i]);
        printf("Apellido: %s\t", apellidos[i]);
        printf("Nombre: %s\t", nombres[i]);
        printf("Nota: %.2f\n", notas[i]);
    }
}