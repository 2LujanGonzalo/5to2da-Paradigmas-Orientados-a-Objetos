#include <stdio.h>
#include <stdlib.h>

int nro = 0;
int suma = 0;

main(){
	for(int i = 0;i<11;i++){
	printf("Ingrese un número Entero:\n");
	scanf("%d",&nro);
	suma+=nro;
	}
	printf("La suma es:%d\n");
	return 0;
}
