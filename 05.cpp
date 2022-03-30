#include <stdio.h>
#include <stdlib.h>

int a[6];
int cont=0;
main(){
	for(int i=0;i<6;i++){
		printf("ingrese numeros (%d de 6)",i+1);	
		scanf("%d",&a[i]);
	}
	for(int i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<6;i++){
		if((a[i]>0 && a[i+1]>0 && a[i+2]>0) || (a[i]<0 && a[i+1]<0 && a[i+2]<0)){
			cont ++;
			i+=2;
		}
	}
	
	printf("%d",cont);
	return 0;
}
