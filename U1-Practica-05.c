#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/*5- El usuario debe poder ingresar los lados de un rectángulo y 
el programa calcula con esos datos la diagonal principal del
rectángulo, superficie y perímetro. Mostrar al usuario los resultado
*/

int main()
{
    
    int lh, lv; //Lh = Lado Horizontal ||| Lv = Lado vertical 

    int diagonalP;
    int superficie;
    int perim;

    printf("Ingrese el valor del lado horizontal\n");
    scanf("%d", &lh);
    printf("Ahora ingrese el valor del lado vertical\n");
    scanf("%d", &lv);

    perim=(2*lh)+(2*lv);
    superficie = lh*lv;
    diagonalP=sqrt(perim);

    printf("El perimetro del recangulo es igual a %d", perim);
    printf("\n");
    printf("La superficie del recangulo es igual a %d", superficie);
    printf("\n");
    printf("La diagonal principal del recangulo es igual a %d", diagonalP);
    printf("\n");

    system("pause");

}