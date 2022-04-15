#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
    ● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
    ● Número de pasajeros que lleve
    ● Tipo horario del día:

Horario A: horas de “Alta” congestión:

    ● Los automóviles con tres pasajeros o más no pagan peaje
    ● Los automóviles con menos de 3 pasajeros pagan $150 
    ● Los camiones pagan $300
    ● Las motos pagan $100

Horario B: horas de “Baja” congestión:

    ● Los automóviles pagan $150
    ● Los camiones pagan $200
    ● Las motos no pagan peaje
    En este horario la tarifa es independientemente del número de pasajeros.

Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.
*/

void main()
{
    //Definicion de variables
    int tipoV,cPas,tipoH;

    //Lectura principal
    printf("Ingrese el tipo de veh%cculo en el que est%c viajando.\n", 161, 160);
    printf("1. Para Camiones.\n");
    printf("2. Para Autos.\n");
    printf("3. Para Motos.\n");
    
    scanf("%i", &tipoV);

    if(tipoV<=3 & tipoV>=1){
        
        printf("Ahora por favor, ingrese la cantidad de pasajeros.\n");
        scanf("%i", &cPas);

        if(cPas<=5 & cPas>=1){
            
            switch (tipoV)
            {
            case 1:
                printf("El tipo de veh%cculo ingresado pertenece a los camiones.\n", 161);
                printf("En su veh%cculo viajan: %i pasajeros\n",161, cPas);
                break;
            case 2:
                printf("El tipo de veh%cculo ingresado pertenece a los automoviles.\n", 161);       
                printf("En su veh%cculo viajan: %i pasajeros\n",161, cPas);
                break;
            case 3:
                printf("El tipo de veh%cculo ingresado pertenece a los motos.\n", 161);   
                printf("En su veh%cculo viajan: %i pasajeros\n",161, cPas);
                break;
    
            default:
                break;
            }
        
        printf("Ingrese el tipo de horario:\n");
        printf("1: Horas de baja congestion.\n");
        printf("2: Horas de alta congestion.\n");
        scanf("%i", &tipoH);
            switch (tipoH)
           {
           case 1:
               printf("Ha seleccionado la hora de baja congestion...\n");
               printf("Procesando su tarifa. . . \n");
               if(tipoV==2 & cPas>=3){
                   printf("El monto a pagar es de: $0\n");
               }else{
                   if(tipoV==1){
                    printf("El monto a pagar es de: $300\n");
                   }else{
                    if(tipoV==3){
                       printf("El monto a pagar es de: $100\n");
                    }
                            else{
                            printf("El monto a pagar es de: $150\n");
                            }
                        }
                    }
               break;
               
           case 2:
                printf("Ha seleccionado la hora de alta congestion...\n");
                printf("Procesando su tarifa. . . \n");
                switch (tipoV)
                {
                case 1:
                    printf("El monto a pagar es: $200\n");
                    break;
                case 2:
                    printf("El monto a pagar es: $150\n");
                case 3:
                    printf("El monto a pagar es: $0\n");
                default:
                    break;
                }
                break;
           default:
               break;
           }

        }else{
            printf("Has ingresado una cantidad inv%clida de pasajeros.\n", 160);
        }

    }else{
        printf("Se ha ingresado un tipo de veh%cculo inv%clido\n",161, 160);
    }
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/