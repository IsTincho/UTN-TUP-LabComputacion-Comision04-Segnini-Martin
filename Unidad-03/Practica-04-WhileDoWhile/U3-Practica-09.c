#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*9. Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
*/

void main()
{
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

    int menu=0;

    printf("Ingrese el DNI asociado a su cuenta: \n");
    do
    {
      scanf("%i", &dniIngresado);
      while (dniIngresado!=dni)
      {
        printf("Error, usuario no encontrado, intente nuevamente.\n");
        scanf("%i", &dniIngresado);
      }
      ingresaCorrectamente=+1;
    } while (ingresaCorrectamente==0);

    printf("Hemos encontrado un usuario!\n");
    printf("Tiene 3 intentos para ingresar su contraseña.\n");
    printf("De lo contrario se bloqueara su cuenta y debera intentarlo nuevamente.\n");
    printf("Ingrese la contraseña: \n");
    
    scanf("%i", &passIngresado);
    while (intentos<3 && passIngresado!=pass)
    {
      
      printf("Error, intente nuevamente.\n");
      printf("Le quedan %i intentos\n", 3-intentos);
      scanf("%i", &passIngresado);
      intentos=intentos+1;
    }

    if (passIngresado==pass)
    {
      ingresaCorrectamente=+1;

      printf("Ha ingresado correctamente.\n");
      printf("Desea consultar SALDO, CBU o SALIR?\n Presione 1 para SALDO\n Presione 2 para CBU \n Cualquier otro valor para SALIR\n");
      
      do{
       scanf("%i", &menu);
       switch (menu)
       {
       case 1:
         printf("Su saldo es: $%i.\n", saldo);
         break;
       case 2:
         printf("Su CBU es: %i.\n", cbu);
       default:
         printf("Saliendo del programa...\n");
         break;
        }
      }while(menu!=3);
    }else{
      printf("Se han excedido el limite de intentos...\n");
      printf("Cerrando programa\n");
    }
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/