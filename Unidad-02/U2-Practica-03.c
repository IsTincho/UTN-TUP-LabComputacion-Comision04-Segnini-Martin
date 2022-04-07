#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*3- Dado un número introducido por el 
usuario, indicar si este es positivo, negativo o nulo.
*/

int main()
{
    int num;
    
    printf("Ingrese un numero entero\n");
    scanf("%i", &num);

    if(num==0){
        printf("El numero es nulo\n");
    }else if(num>0){
        printf("El numero es positivo\n");
    }else{
        printf("El numero es negativo\n");
    }

  system("pause");
}