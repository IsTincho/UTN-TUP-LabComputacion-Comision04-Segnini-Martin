#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/*Integrantes: 
    50,601 Ramirez
    50,603 Pivetta
    50,576 Santini 
    50,567 Segnini 
*/

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
    
    int tVehiculo, nPasajeros, tHora;
    printf("Ingrese el tipo de vehiculo segun el menu:\n 1-Camion\n 2-Automovil\n 3-Moto\n");
    scanf("%i", &tVehiculo);
    
    while (tVehiculo<1||tVehiculo>3)
    {
        printf("Error, vuelva a ingresar un tipo valido\n");
        scanf("%i", &tVehiculo);
    }
    
    printf("Ingrese el tipo de horario del dia:\n");
    printf("Horario 1: horas de Alta congesti%cn:\n", 162);
    printf("Horario 2: horas de Baja congesti%cn:\n", 162);
    scanf("%i", &tHora);

    while (tHora<1||tHora>2)
    {
        printf("Error, vuelva a ingresar un tipo valido\n");
        scanf("%i", &tHora);
    }

    printf("Ingrese la cantidad de pasajeros\n");
    scanf("%i", &nPasajeros);
    if(tVehiculo==3){
        while (nPasajeros>2||nPasajeros<1)
        {
            printf("Error, en una moto no pueden ir %i pasajeros. Ingrese nuevamente\n", nPasajeros);
            scanf("%i", &nPasajeros);
        }
        
    }else{
        while (nPasajeros>5||nPasajeros<1)
        {
            printf("Error, en una vehiculo de 4 ruedas no pueden ir %i pasajeros. Ingrese nuevamente\n", nPasajeros);
            scanf("%i", &nPasajeros);
        }
    }

    switch (tHora)
    {
    case 1:
        printf("Ha seleccionado las horas de congestion ALTA\n");
        if(tVehiculo==2&&nPasajeros<3){
            printf("Usted debe abonar $150\n");
        }else if(tVehiculo==2&&nPasajeros>=3){
            printf("Usted debe abonar $0\n");
        }else if(tVehiculo==1){
            printf("Usted debe abonar $300\n");
        }else{
            printf("Usted debe abonar $100\n");
        }
        break;
    case 2:
        printf("Ha seleccionado las horas de congestion BAJA\n");
        if(tVehiculo==2){
            printf("Usted debe abonar $150\n");
        }else if(tVehiculo==1){
            printf("Usted debe abonar $200\n");
        }else{
            printf("Usted debe abonar $0\n");
        }
        break;
    default:
        break;
    }

  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/