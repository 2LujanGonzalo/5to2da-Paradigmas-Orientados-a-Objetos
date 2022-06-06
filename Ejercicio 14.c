#include <stdio.h>
#include <stdlib.h>
int main()
{
int n=99,m=99,r=99,o=100,matriz_A[n][m],matriz_B[m][r],matriz_C[n][r];
while(o!=3){
    printf("1)ingrese 2 matrices\n2)multiplicacion de matrices\n3)Salir\n");
    scanf("%d",&o);
    switch(o){
        case 1:
            printf("Ingrese el largo de la matriz A:");
            scanf("%d",&n);
            printf("Ingrese el alto de la matriz A tambien sera el largo de B:");
            scanf("%d",&m);
            printf("Ingrese el alto de la matriz B:");
            scanf("%d",&r);
            
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    printf("Ingrese los valores de A:");
                    scanf("%d",&matriz_A[i][j]);
                }
                
            }
           for(int i=0;i<m;i++){
                for(int j=0;j<r;j++){
                    printf("Ingrese los valores de B:");
                    scanf("%d",&matriz_B[i][j]);
                }
                
            }
            printf("matriz_A: \n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                 printf("%d ",matriz_A[i][j]);
                }
                printf("\n");
            }
            printf("matriz_B:\n");            
           for (int i = 0; i < m; i++) {
                for (int j = 0; j < r; j++) {
                 printf("%d ",matriz_B[i][j]);
                }
                printf("\n");
            }
        break;
        case 2:
        for(int i=0;i<n;i++){
            for(int j=0;j<r;j++){
                matriz_C[i][j]=0;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < r; j++) {
                for (int k = 0; k < m; k++) {
                    matriz_C[i][j]+=matriz_A[i][k]*matriz_B[k][j];
                }
            printf("%5d ",matriz_C[i][j] );
            }
        printf("\n");
        }

        break;
    }
}    
    return 0;
}