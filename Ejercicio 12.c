#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,m;
    printf("Ingrese Alto:\n");
    scanf("%d",&n);
    printf("Ingrese Ancho:\n");
    scanf("%d",&m);
    int a[n][m];
    int b[n][m];
    printf("Ingrese 9 valores de A: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Ingrese 9 valores de B: \n");
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("SUMANDO\n");
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]+b[i][j]);
            
        }
    printf("\n");    
    }
    
    
    
    return 0;
}