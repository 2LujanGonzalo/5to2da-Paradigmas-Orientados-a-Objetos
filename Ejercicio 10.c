#include <stdlib.h>
#include <stdio.h>

int main(void){
int n=200,a[10],b[10],c[10],contA=0,contB=0;
int temp;
while(n!=0){
printf("seleccione la opcion empezando desde 1: \n");
printf("1)ingrese 10 numeros de A\n 2)ingrese los 10 numeros de B\n 3)Suma de vectores\n 4)Resta de vectores\n 5)Indica cual de los 2 tiene mas numeros primos\n 6)Ordenarlos de mayor a menor\nPulse 0(cero) para terminar el programa\n");
scanf("%d",&n);
if(n==0){ return 0;}
switch(n){

case 1:
    for(int j=0;j<10;j++){
        printf("ingrese los 10: ");
        scanf("%d",&a[j]);
    }
    printf("\n");
    break;
case 2:
    for(int j=0;j<10;j++){
        printf("ingrese los 10: ");
        scanf("%d",&b[j]);
    }
    printf("\n");
    break;
case 3:
    for(int j=0;j<10;j++){
        printf("%d ",a[j]+b[j]);
    }
    printf("\n");
    break;
case 4:
    for(int j=0;j<10;j++){
        printf("%d ",a[j]-b[j]);
    }
    printf("\n");
    break;
case 5:

        for(int j=0;j<10;j++){
        int divisiones=1,residuo=0;
            while(divisiones<=a[j]){
            if(a[j]%divisiones==0){
                residuo++;
            }
            divisiones++;
            }
            if(residuo==2){
                contA++;
            }
        }

        for(int j=0;j<10;j++){
        int divisiones=1,residuo=0;
            while(divisiones<=b[j]){
            if(b[j]%divisiones==0){
                residuo++;
            }
            divisiones++;
            }
            if(residuo==2){
                contB++;
            }
        }
if(contA>contB){
    printf("El A tiene mas primos\n");
}else{
    if(contA==contB){
        printf("Los vectores tienen la misma cantidad de numeros primos\n");
    }else{
        printf("El B tiene mas primos\n");
    }
}

    break;
case 6:
       for(int i=0;i<10;i++){
           for(int j=i+1;j<10;j++){
               if(a[i]<a[j]){
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
               }
           }
       }
for(int i=0;i<10;i++){
	printf("%d ",a[i]);
}
printf("\n");

       for(int i=0;i<3;i++){
           for(int j=i+1;j<3;j++){
               if(b[i]<b[j]){
                   temp=b[i];
                   b[i]=b[j];
                   b[j]=temp;
               }
           }
       }
for(int i=0;i<10;i++){
	printf("%d ",b[i]);
}
printf("\n");

break;
}

}
return 0;
}