#include <stdio.h>
#include <stdlib.h>

int a[5];
int min=10000;
int aux=0;

main(){
 for(int i=0;i<5;i++){
 	printf("ingrese 1 numero(%d de 5)",i+1);
 	scanf("%d",&a[i]);
 }
 for(int i=0;i<5;i++){
 	printf("%d ",a[i]);
 }
printf("\n");

for(int i=0;i<5;i++){

	for(int j=i;j<5;j++){
		if(a[j]<min){
		min=a[j];
		aux=a[i];
		a[i]=a[j];
		a[j]=aux;
	}
		
	}
}
for(int i=0;i<5;i++){
 	printf("%d ",a[i]);
 }
printf("\n");

	return 0;
}
