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
    
    int cVentas, dni, mVenta, mPago, tTarjeta, cCuotas, resumen;
    int i, cuotas, total;

    printf("Por favor, para comenzar, ingrese la cantidad de ventas a registrar.\n");
    printf("Tenga en cuenta que en caso de ingresar un n%cmero menor a 1 finalizar%c el programa.\n",163, 160);
    scanf("%i", &cVentas);

    if (cVentas>=1)
    {
        printf("Comencemos a cargar las %i ventas.\n", cVentas);
        for (i = 1; i <=cVentas; i++)
        {
            printf("Datos de la operaci%cn: %i\n",162, i);
            printf("Ingrese el DNI del comprador: \n");
            scanf("%i",&dni);

           if(dni>1000000 && dni<99999999){
                printf("El DNI: %i es correcto. Sigamos...\n", dni);
        //************MEDIOS DE PAGO**************
                printf("Seleccione su metodo de pago: 1 para EFECTIVO, 2 para TARJETA\n");
                scanf("%i", &mPago);
                switch (mPago)
                {
                case 1:
                    printf("Ha seleccionado EFECTIVO\n");
                    break;
                 case 2:
                    printf("Ha seleccionado Tarjeta de Credito\n");
                    printf("Ingrese el tipo de Tarjeta: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal\n");
                    printf("En caso de elegir una opcion el programa se cerrara\n");
                    scanf("%i", &tTarjeta);
            //****************** TIPO DE TARJETA ************************
                switch (tTarjeta)
                {
                case 1:
                    printf("VISA\n");
                break;
                case 2:
                    printf("American Express\n");
                break;
                case 3:
                    printf("Mercado Pago\n");
                break;
                case 4:
                    printf("Cabal\n");
                break;
            
                default:
                    printf("Ha ingresado una tarjeta invalida.\n");
                break;
                }
                break;
        
                default:
                printf("Error, ha seleccionado una opcion invalida...\n");
                printf("Cerrando programa...\n");
                break;
                }
        //************* Calculo de Intereses **************
        if(mPago==2){
            printf("Desea pagar en cuotas?\n");
            printf("Ingresar '1' para SI y cualquier otra cosa para NO\n");
            scanf("%i", &cuotas);
        if(cuotas==1){
            printf("Contamos con 3, 6  o 12 cuotas.\n");
            printf("Para 3 cuotas se aplicara un interes del 4%\n");
            printf("Para 6 y 12 cuotas el interes sera de 8%\n");
            printf("Por favor, presione ''1'' para 3 Cuotas, ''2'' para 6 cuotas y ''3'' para 12 cuotas. De lo ''contrario'' se realizara un pago unico.\n");
            scanf("%i", &cCuotas);
            switch (cCuotas)
            {
            case 1:
                printf("Usted ha seleccionado pagar $4600 en 3 cuotas.\n");
                cCuotas=3;
                total=4600*1.04;
                break;
            
            case 2:
                printf("Usted ha seleccionado pagar $4600 en 6 cuotas.\n");
                cCuotas=6;
                total=4600*1.08;
                break;
            
            case 3:
                printf("Usted ha seleccionado pagar $4600 en 12 cuotas.\n");
                cCuotas=12;
                total=4600*1.08;
                break;
            
            default:
                cCuotas=1;
                total=4600;
                break;
            }
        }
        }else{
            cCuotas=1;
            total=4600;
        }
        }

        }
    }else{
        printf("***ERROR**\n");
        printf("Ha ingresado %i ventas. Lo que es un valor inv%clido", mVenta, 160);
    }
    
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/