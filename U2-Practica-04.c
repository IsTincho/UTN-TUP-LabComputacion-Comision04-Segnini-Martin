#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*4- Ingresar por teclado tres números, determinar cuál es el 
mayor y visualizarlo en pantalla.
*/

int main()
{
  
  float n1, n2, n3;

    printf("Ingrese el numero 1: \n");
    scanf("%f", &n1);
    printf("Ingrese el numero 2: \n");
    scanf("%f", &n2);
    printf("Ingrese el numero 3: \n");
    scanf("%f", &n3);

    if(n1>n2&&n1>n3){
        printf("El numero mas grande es el: %.2f", n1,"\n");
    }else if(n2>n1&&n2>n3){
        printf("El numero mas grande es el: %.2f", n2,"\n");
    }else{
        printf("El numero mas grande es el: %.2f", n3,"\n");
    }
    printf("\n");
    
  system("pause");
}