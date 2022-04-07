#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. 
Verificar que el saldo sea mayor o igual que el importe a retirar.
*/

int main()
{
    
    float saldo, retiro, final;

    printf("Ingresar el saldo de su cuenta bancaria:\n");
    scanf("%f", &saldo);

    printf("Ingrese el monto a retirar de su cuenta bancaria: \n");
    scanf("%f", &retiro);

    if(saldo>=retiro){
        final=saldo-retiro;
        printf("El saldo de su cuenta ha sido actualizado con exito.\n");
        printf("Ahora tiene un total de: $%.2f\n", final);
    }else{
        printf("ERROR 0208.\n");
        printf("El monto a retirar es mayor a su saldo. Intente nuevamente. \n");
    }
    
  system("pause");
}