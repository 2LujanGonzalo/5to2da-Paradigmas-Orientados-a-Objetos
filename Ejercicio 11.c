#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a[3][3];
    int b[3][3];
    printf("Ingrese 9 valores de A: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Ingrese 9 valores de B: \n");
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("SUMANDO\n\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
            
        }
    printf("\n");    
    }
    
    
    
    return 0;
}