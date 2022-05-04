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
    while (venA!=0)
    {
      while (venA>0)
      {
        scanf("%f", &venA);
        sumA=sumA+venA;
      }
      
    }

    printf("Total $%.2f\n", sumA);

  //VENDEDOR B  

      printf("Vamos a ingresar las ventas del vendedor B, para pasar al siguiente ingresar 0\n");
    while (venB!=0)
    {
      while (venB>0)
      {
        scanf("%f", &venB);
        sumB=sumB+venB;
      }
      
    }

    printf("Total $%.2f\n", sumB);

  //VENDEDOR C  
    printf("Vamos a ingresar las ventas del vendedor C, para pasar al siguiente ingresar 0\n");
    while (venC!=0)
    {
      while (venC>0)
      {
        scanf("%f", &venC);
        sumC=sumC+venC;
      }
      
    }

    printf("Total $%.2f\n", sumC);
  
  //VENDEDOR D
    printf("Vamos a ingresar las ventas del vendedor D, para pasar al siguiente ingresar 0\n");
    while (venD!=0)
    {
      while (venD>0)
      {
        scanf("%f", &venD);
        sumD=sumD+venD;
      }
      
    }

    printf("Total $%.2f\n", sumD);

  //VENDEDOR E
    printf("Vamos a ingresar las ventas del vendedor E, para pasar al siguiente ingresar 0\n");
    while (venE!=0)
    {
      while (venE>0)
      {
        scanf("%f", &venE);
        sumE=sumE+venE;
      }
      
    }

    printf("Total $%.2f\n", sumE);

    printf("***RESUMEN FINAL***\n");
    printf("El vendedor A se lleva una comision de: $%.2f\n",sumA*1.025);
  
    printf("El vendedor B se lleva una comision de: $%.2f\n",sumB*1.025);
  
    printf("El vendedor C se lleva una comision de: $%.2f\n", sumC*1.025);
  
    printf("El vendedor D se lleva una comision de: $%.2f\n", sumD*1.025);

    printf("El vendedor E se lleva una comision de: $%.2f\n", sumE*1.025);
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/