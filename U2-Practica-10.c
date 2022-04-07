#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué 
mes corresponde dicho número (por ejemplo: si ingresa el número 2 se 
deberá mostrar febrero en la consola, si ingresa el 8, agosto, etc.) 
(realizar el ejercicio primero utilizando estructura if y luego 
estructura switch).
*/

int main()
{
    int mes;

    printf("Ingrese un numero del 1 al 12: \n");
    scanf("%i", &mes);

    if(mes>0){
        switch (mes)
        {
        case 1:
            printf("Corresponde al mes de Enero.\n");
            break;
        
        case 2:
            printf("Corresponde al mes de Febrero.\n");
            break;
        
        case 3:
            printf("Corresponde al mes de Marzo.\n");
            break;
        
        case 4:
            printf("Corresponde al mes de Abril.\n");
            break;
        
        case 5:
            printf("Corresponde al mes de Mayo.\n");
            break;
        
        case 6:
            printf("Corresponde al mes de Junio.\n");
            break;
        
        case 7:
            printf("Corresponde al mes de Julio.\n");
            break;
        
        case 8:
            printf("Corresponde al mes de Agosto.\n");
            break;
        
        case 9:
            printf("Corresponde al mes de Septiembre.\n");
            break;
        
        case 10:
            printf("Corresponde al mes de Octubre.\n");
            break;
        
        case 11:
            printf("Corresponde al mes de Noviembre.\n");
            break;
        
        case 12:
            printf("Corresponde al mes de Diciembre.\n");
            break;
        
        default:
            printf("el numero ingresado no corresponde a un mes del año");
            break;
        }
    }else{
        printf("ERROR!! Los meses no son numeros negativos o nulos!\n");
    }
    
  system("pause");
}