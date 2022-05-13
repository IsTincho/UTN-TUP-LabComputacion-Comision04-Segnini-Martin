#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
el 2,5% de la suma de sus ventas.
*/

void main()
{

    float venA, venB, venC, venD, venE;
    float sumA, sumB, sumC, sumD, sumE;

    sumA=0;
    sumB=0;
    sumC=0;
    sumD=0;
    sumE=0;

  //VENDEDOR A

    printf("Vamos a ingresar las ventas del vendedor A, para pasar al siguiente ingresar 0\n");
    do 
    {
      scanf("%f", &venA);
      while (venA<0)
      {
        printf("Error, ingrese un valor valido.\n");  
        scanf("%f", &venA);
      }
      sumA=sumA+venA;
    }while (venA!=0);

    printf("Total $%.2f\n", sumA);

  //VENDEDOR B  

      printf("Vamos a ingresar las ventas del vendedor B, para pasar al siguiente ingresar 0\n");
    do 
    {
      scanf("%f", &venB);
      while (venB<0)
      {
        printf("Error, ingrese un valor valido.\n"); 
        scanf("%f", &venB);
      }
      sumB=sumB+venB;
    }while (venB!=0);

    printf("Total $%.2f\n", sumB);

  //VENDEDOR C  
    printf("Vamos a ingresar las ventas del vendedor C, para pasar al siguiente ingresar 0\n");
    do 
    {
      scanf("%f", &venC);
      while (venC<0)
      {  
        printf("Error, ingrese un valor valido.\n");
        scanf("%f", &venC);
      }
      sumC=sumC+venC;
    }while (venC!=0);

    printf("Total $%.2f\n", sumC);
  
  //VENDEDOR D
    printf("Vamos a ingresar las ventas del vendedor D, para pasar al siguiente ingresar 0\n");
    do
    {
      scanf("%f", &venD);
      while (venD<0)
      {
        printf("Error, ingrese un valor valido.\n");
        scanf("%f", &venD);
      }
      sumD=sumD+venD;
    }while (venD!=0);

    printf("Total $%.2f\n", sumD);

  //VENDEDOR E
    printf("Vamos a ingresar las ventas del vendedor E, para pasar al siguiente ingresar 0\n");
    do 
    {
      scanf("%f", &venE);
      while (venE<0)
      {
        printf("Error, ingrese un valor valido.\n"); 
        scanf("%f", &venE);
      }
      sumE=sumE+venE;  
    }while (venE!=0);

    printf("Total $%.2f\n", sumE);

    printf("***RESUMEN FINAL***\n");
    printf("El vendedor A se lleva una comision de: $%.2f\n",sumA*.025);
  
    printf("El vendedor B se lleva una comision de: $%.2f\n",sumB*.025);
  
    printf("El vendedor C se lleva una comision de: $%.2f\n", sumC*.025);
  
    printf("El vendedor D se lleva una comision de: $%.2f\n", sumD*.025);

    printf("El vendedor E se lleva una comision de: $%.2f\n", sumE*.025);
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/