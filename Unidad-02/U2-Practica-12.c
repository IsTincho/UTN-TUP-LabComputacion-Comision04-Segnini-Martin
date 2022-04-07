#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*12- Realizar un programa que permita registrar los datos para una venta
de $4600. Para ello, se le pedirá al usuario que ingrese su DNI, validar 
que dicho número no sea menor que 1000000 ni mayor que 99999999. Luego, 
requerir al usuario que seleccione el medio de pago: 
1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese 
una opción de las siguientes:
1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las 
que abonará (1, 3, 6 o 12). El interés por pagar en cuotas será
de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 
8% para 6 y 12 cuotas. Validar que todos los datos ingresados por 
el usuario sean correctos, en caso contrario informar la situación
y finalizar programa. Por último, presentar un resumen de la operación, 
por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
*/

int main()
{
    int dni, medio, tarjeta, cuotas, ncuotas;
    float total;
    
    printf("Para validar la compra de $4600 necesitamos que complete las siguientes consignas.\n");
    printf("Por favor, ingrese su DNI: \n");
    scanf("%i", &dni);
    if(dni>1000000 && dni<99999999){
        printf("El DNI: %i es correcto. Sigamos...\n", dni);
        //************MEDIOS DE PAGO**************
        printf("Seleccione su metodo de pago: 1 para EFECTIVO, 2 para TARJETA\n");
        scanf("%i", &medio);
        switch (medio)
        {
        case 1:
            printf("Ha seleccionado EFECTIVO\n");
            break;
        case 2:
            printf("Ha seleccionado Tarjeta de Credito\n");
            printf("Ingrese el tipo de Tarjeta: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal\n");
            printf("En caso de elegir una opcion el programa se cerrara\n");
            scanf("%i", &tarjeta);
            //****************** TIPO DE TARJETA ************************
            switch (tarjeta)
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
        if(medio==2){
        printf("Desea pagar en cuotas?\n");
        printf("Ingresar '1' para SI y cualquier otra cosa para NO\n");
        scanf("%i", &cuotas);
        if(cuotas==1){
            printf("Contamos con 3, 6  o 12 cuotas.\n");
            printf("Para 3 cuotas se aplicara un interes del 4%\n");
            printf("Para 6 y 12 cuotas el interes sera de 8%\n");
            printf("Por favor, presione ''1'' para 3 Cuotas, ''2'' para 6 cuotas y ''3'' para 12 cuotas. De lo ''contrario'' se realizara un pago unico.\n");
            scanf("%i", &ncuotas);
            switch (ncuotas)
            {
            case 1:
                printf("Usted ha seleccionado pagar $4600 en 3 cuotas.\n");
                ncuotas=3;
                total=4600*1.04;
                break;
            
            case 2:
                printf("Usted ha seleccionado pagar $4600 en 6 cuotas.\n");
                ncuotas=6;
                total=4600*1.08;
                break;
            
            case 3:
                printf("Usted ha seleccionado pagar $4600 en 12 cuotas.\n");
                ncuotas=12;
                total=4600*1.08;
                break;
            
            default:
                ncuotas=1;
                total=4600;
                break;
            }
        }
        }else{
            ncuotas=1;
            total=4600;
        }
    
    //*************** RESUMEN DE COMPRA ********************
    printf("///////////////RESUMEN FINAL\\\\\\\\\\\\\\\\\\\\\\ \n");
    printf("DNI: %i\n", dni);
    if(medio==1){
        printf("Medio de Pago: EFECTIVO\n");
    }else{
        printf("Medio de Pago: Tarjeta de Credito\n");
        switch (tarjeta)
            {
            case 1:
                printf("Tarjeta: VISA\n");
                break;
            case 2:
                printf("Tarjeta: American Express\n");
                break;
            case 3:
                printf("Tarjeta: Mercado Pago\n");
                break;
            case 4:
                printf("Tarjeta: Cabal\n");
                break;
            
            default:
                break;
            }
    }
    printf("Cuotas: %i\n", ncuotas);
    printf("Total a pagar: $%.2f\n", total);

    }else{
        printf("El DNI ingresado no es valido\n");
    }

  system("pause");
}