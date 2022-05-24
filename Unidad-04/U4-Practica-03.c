#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.
*/

void main()
{
    int arreglo[5], i, n, contador;
	contador=0;
    n=5;
 
	for (i=0;i<5;i++){
		printf("Digite el %d numero de la lista: \n",i);
		scanf("%i",&arreglo[i]);
	}

	for (i=0;i<5;i++){
		if (n==arreglo[i]){
			contador++;
		}
	}
	printf("El elemento %i, se repite %d\n",n,contador);
    
  system("pause");
}

/*

  Con %c, afuera numero, se ponen los tildes

  á: 160, é: 130, í: 161, ó: 162, ú: 163, 
  Á: 181, É: 144, Í: 214, 
  Ó: 224, Ú: 23, ñ: 164, Ñ: 165 
*/