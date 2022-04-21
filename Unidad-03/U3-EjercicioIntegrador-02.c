#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
- Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
Al finalizar el registro, mostrar la suma total de las ventas ingresadas.
*/

void main()
{
    int cVentas, dni, mPago, tTarjeta, cCuotas, cuotas;
    float total, tVentas, venta;
    int i;

    total=0;
    tVentas=0;
    venta=0;

    printf("Ingrese la cantidad de ventas a ingresar.\n");
    scanf("%i", &cVentas);

    if(cVentas>0){

        printf("Vamos a cargar las %i ventas.\n", cVentas);
      for (i = 1; i <= cVentas; i++)
      {
        printf("Cargue el DNI de la venta n%cmero: %i.\n", 163, i);
        printf("Recuerde que si el DNI es inv%clido, la carga se anular%c.\n",160,160);
        scanf("%i",&dni);
        if (dni>1000000 && dni<99999999)
        {
//Monto de la venta
          printf("DNI validado. Ahora ingrese el monto de la venta...\n");
          scanf("%f", &venta);
//Calculo de medio de pago y coutas
          printf("Ahora, ingrese el medio de pago con el siguiente men%c\n",163);
          printf("Presione 1 para EFECTIVO\n");
          printf("Presione 2 para TARJETA\n");
          scanf("%i", &mPago);
          switch (mPago)
          {
          case 1:
//Calculo con Efectivo          
            printf("Ha seleccionado EFECTIVO...\n");
            total=venta;
            printf("Procesando...\n");
            printf("************************\n");
            printf("DNI: %i\n",dni);
            printf("Medio de pago: Efectivo\n");
            printf("Cuotas: 1\n");
            printf("Total: $%.2f\n", total);
            break;
          case 2:
//Calculo con Tarjeta
            printf("Ha seleccionado TARJETA...\n");
            printf("Ingrese el tipo de tarjeta segun el siguiente men%c...\n",163);
//TIPOS DE TARJETA+Switch
            printf("1 para Visa\n");
            printf("2 para American Express\n");
            printf("3 para Mercado Pago\n");
            printf("4 para Cabal\n");
            printf("De lo contrario se invalidara la venta....\n");
            scanf("%i", &tTarjeta);
            switch (tTarjeta)
            {
            case 1:
              printf("Ha seleccionado la tarjeta de tipo Visa\n");
              break;
            case 2:
              printf("Ha seleccionado la tarjeta de tipo American Express\n");
              break;
            case 3:
              printf("Ha seleccionado la tarjeta de tipo Mercado Pago\n");
              break;
            case 4:
              printf("Ha seleccionado la tarjeta de tipo Cabal\n");
              break;
            
            default:
              printf("Error.... Venta anulada.\n");
              break;
            }
//Calcular cuotas+intereses
            if(tTarjeta>=1&&tTarjeta<=4){
              printf("Desea pagar en cuotas? Ingrese 1 para SI.\n");
              printf("Cualquier otro valor se tomara como pago unico.\n");
              scanf("%i",&cuotas);
              if (cuotas==1)
              {
//INTERESES
                printf("Ingrese 1 para pagar en 3 cuotas\n");
                printf("Ingrese 2 para pagar en 6 cuotas\n");
                printf("Ingrese 3 para pagar en 12 cuotas\n");
                scanf("%i", &cCuotas);
                switch (cCuotas)
                {
                case 1:
                  total=venta*1.04;
                  break;
                
                case 2:
                  total=venta*1.08;
                  break;
                
                case 3:
                  total=venta*1.08;
                  break;
                
                default:
                  printf("Venta anulada...\n");
                  break;
                }
                printf("Procesando...\n");
                printf("************************\n");
                printf("DNI: %i\n",dni);
//Tipo de tarjeta en X cuotas
              switch (tTarjeta)
            {
            case 1:
              printf("Medio de pago: Tarjeta Visa\n");
              break;
            case 2:
              printf("Medio de pago: Tarjeta American Express\n");
              break;
            case 3:
              printf("Medio de pago: Tarjeta Mercado Pago\n");
              break;
            case 4:
             printf("Medio de pago: Tarjeta Cabal\n");
              break;
            default:
              break;
            }
                switch (cCuotas)
                {
                case 1:
                  printf("Cuotas: 3\n");
                  break;
                
                case 2:
                  printf("Cuotas: 6\n");
                  break;
                
                case 3:
                  printf("Cuotas: 12\n");
                  break;
                default:
                  break;
                }
                printf("Total: $%.2f\n", total);
//FINALIZACION DE RESUMEN
              }else{
                printf("Procesando...\n");
                printf("************************\n");
                printf("DNI: %i\n",dni);
//Tipo de tarjeta en 1 cuota                
              switch (tTarjeta)
            {
            case 1:
              printf("Medio de pago: Tarjeta Visa\n");
              break;
            case 2:
              printf("Medio de pago: Tarjeta American Express\n");
              break;
            case 3:
              printf("Medio de pago: Tarjeta  Mercado Pago\n");
              break;
            case 4:
             printf("Medio de pago: Tarjeta Cabal\n");
              break;
            default:
              break;
            }
                total=venta;
                printf("Cuotas: 1\n");
                printf("Total: $%.2f", total);
                printf("\n");
              }
              
            }
            break;
          default:
            printf("Ha ingresado un medio de pago incorrecto... Venta anulada.\n");
            break;
          }
        
        }else{
          printf("El DNI ingresado no es v%clido\n", 160);
          printf("Carga de la venta nro: %i anulada. Siguiente...\n");
        }
        tVentas=tVentas+total;
      }
//Good ending
      printf("***************************\n");
      printf("El d%ca de hoy se han registrado un total de $%.2f en ventas.\n",161, tVentas);
      
    }else{
//Bad ending
      printf("Cerrando programa....\n");
    }


  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/