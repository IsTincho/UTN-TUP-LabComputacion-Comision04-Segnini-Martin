#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*7- Ingresar el valor de una venta y aplicar el 15% de descuento si el 
valor es >= 100000 y un 10% si es menor. Validar que la venta sea 
mayor que 0, caso contrario informar dicha situación.
*/

int main()
{
    
    float valorV, desc;
    
    printf("Ingrese el valor de la venta: \n");
    scanf("%f", &valorV);

    if(valorV==0){
        printf("No se ha producido ninguna venta.\n");
    }else if(valorV>=10000){
        desc=valorV*0.15;
        printf("El valor de la venta con el descuento del 15%% aplicado, es de: $ %.2f\n", valorV-desc);
    }else{
        desc=valorV*0.1;
        printf("El valor de la venta con el descuento del 10%% aplicado, es de: $ %.2f\n", valorV-desc);
    }
    
  system("pause");
}