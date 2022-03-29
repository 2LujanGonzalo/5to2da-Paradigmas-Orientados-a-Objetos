#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int a[10];
int b[10];
main(){
	for(int i=0;i<10;i++){
	printf("ingrese 1 numero (%d de 10)",i+1);
	scanf("%d",&a[i]); 
	
}
//imprimiendo a;
for(int i=0;i<10;i++){
	printf("%d ",a[i]);
}

for(int i=0;i<10;i++){
	int min=10000;
	for(int j=0;j<10;j++){
		if(a[j]<min){
			min=a[j];
		}
	}
	b[i]=min;
	for(int k=0;k<10;k++){
		if(b[i]==a[k]){
			a[k]=1000;
		}
	}
}
printf("\n");

//imprimiendo a y b;
for(int i=0;i<10;i++){
	printf("%d ",a[i]);
}
printf("\n");
for(int i=0;i<10;i++){
	printf("%d ",b[i]);
}

	return 0;
}
