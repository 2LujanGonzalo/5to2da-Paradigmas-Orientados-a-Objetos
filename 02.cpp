#include <stdio.h>
#include <stdlib.h>

int nro;
int suma = 0;
int i = 0;
main(){
	printf("Ingrese un numero:");
	scanf("%d",&nro);
	while(nro != 0){
		suma+=nro;
	printf("Ingrese un numero:");
	scanf("%d",&nro);
	}
	printf("La suma es: %d \n",suma);
	return 0;
}
