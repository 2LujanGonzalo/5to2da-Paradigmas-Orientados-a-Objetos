#include <stdio.h>
#include <stdlib.h>

int a[], b[], t, n;

int main(){
	
	printf("Introduzca el tamaño del array\n");
	scanf("%d", &t);
	
	//rellenando a
	for(int i = 0; i < t; i++){
		printf("Introduzca los valores del array (menores a 500)\n");
		scanf("%d", &n);
		a[i] = n;
	}

	printf("\n");
	//ordenando a en b y cambiando los valores en a
	for(int i = 0; i < t; i++){
		int min = 9000;
		for(int j = 0; j < t; j++){
			if(a[j] < min){
		 		min = a[j];
			}
		}
		b[i] = min;
		for(int k = 0; k < t; k++){
			if(b[i] == a[k]){
				a[k] = 1000;
			}
			printf("%d ", a[k]);
		}
		printf("\t\n");
	}
	
	
		printf("\n");
	
	for(int i = 0; i < t; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for(int i = 0; i < t; i++){
		printf("%d ", b[i]);
	}
	
}

