#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*Integrantes: 
    50,601 Ramirez
    50,576 Santini 
    50,567 Segnini 
*/

/*
Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5.
*/

void main()
{
  bool encontrado = false; 
  int i, cantE= 100;
  int cBarras=0;
  int cStock = 0;
  int posStock = 0;
  int eleccion;
  int stock[2][100];
  char desc[100][100];

  do
  {
    printf("\n1. Cargar productos.\n2. Modificar stock.\n3. Mostrar productos sin stock.\n4. Listar productos.\n5. Salir.\n"
    );
    
    printf("\nElija una opci%cn\n", 162);
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
            for (i = 0; i < cantE; i++)
            {
              printf("Ingrese el c%cdigo de barras n%cmero: %i\n", 162, 163, i + 1);
              scanf("%i", &cBarras);
            
              while (cBarras<0)
            {
              printf("Error, c%cdigo de barras no puede ser un n%cmero negativo.\n", 162, 163);
              scanf("%i", &cBarras);
            }
            stock[0][i]=cBarras;

            printf("Ingrese el stock del producto \n");
            scanf("%i", &cStock);
            
            while (cStock<0)
            {
              printf("Error, el stock no puede ser un n%cmero negativo.\n", 163);
              scanf("%i", &cStock);
            }
            stock[1][i] = cStock;

            printf("Nombre del electrodom%cstico \n", 130);
            scanf("%s", &desc[i]);

              
            }
    break;

    case 2:
      printf("Ingrese el c%cdigo del producto a modificar \n", 162);
      scanf("%d", &posStock);
      
      for (i = 0; i < cantE; i++)
        { 
          if (posStock == stock[0][i])
          {
            printf("El producto de c%cdigo %d, descripci%cn %s, stock: %d \n",162, stock[0][i], 162, desc[i], stock[1][i]);
            printf("Ingrese la nueva cantidad \n");
            scanf("%d", &cStock);
            stock[1][i] = cStock;
            printf("La nueva cantidad es: %d \n", stock[1][i]); 
            encontrado = true;
          }
        }
      if (encontrado == false)
      {
        printf("Electrodom%cstico inexistente \n", 130);
      }
      encontrado = false;
      
      
    break;

    case 3:
      for (i = 0; i < cantE; i++)
      {
        if (stock[1][i] == 0)
        {
          printf("Descripci%cn %s Electrodom%cstico %d Cantidad %d \n", 162, desc[i], 130, stock[0][i], stock[1][i]);
          encontrado = true;
        }
      }
      if (encontrado == false)
        {
          printf("No hay ning%cn producto sin stock \n", 163);
        }
      encontrado = false;
    break;

    case 4:  
      for (i = 0; i < cantE; i++)
      {
        printf("Descripci%cn %s Electrodom%cstico %d Cantidad %d \n", 162, desc[i], 130, stock[0][i], stock[1][i] );
      }
    break;

    case 5:
      exit(0);
    break;
    
    default:
      printf("La opci%cn ingresada no es v%clida \n", 162, 160);
    break;
    }

  } while (eleccion !=5);
  

  
  system("pause");
}