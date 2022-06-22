#include <stdio.h>
    int suma(int,int);
    int multiplicacion(int,int);
    int determinante(int);
    
int main()
{
    int l=3,a[l][l],b[l][l],c[l][l];

    
    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            c[i][j]=0;
            printf("Ingrese el valor de la matriz a[%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            printf("Ingrese el valor de la matriz b[%d][%d]:\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    //Suma
    printf("Suma:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ",suma(a[i][j],b[i][j]));
        }
        printf("\n");
    }
    
    
    //Multiplicacion
    printf("Multiplicacion:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            for (int k = 0; k < l; k++) {
                c[i][j]+=multiplicacion(a[i][k],b[k][j]);
            }
            printf("%d ",c[i][j]);
        } 
        printf("\n");
    }
    
    //determinante
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            determinante(a[i][j]);
        }
    }
    
    
}


int suma(int a,int b){
    return a+b;
}

int multiplicacion(int a,int b){
    return a*b;
}

int determinante(int a){
    if (l==3) {
        printf("%d \n",matriz_det[0][0]*matriz_det[1][1]*matriz_det[2][2]+matriz_det[0][1]*matriz_det[1][2]*matriz_det[2][0]+matriz_det[0][2]*matriz_det[1][0]*matriz_det[2][1]-matriz_det[0][2]*matriz_det[1][1]*matriz_det[2][0]-matriz_det[0][0]*matriz_det[1][2]*matriz_det[2][1]-matriz_det[0][1]*matriz_det[1][0]*matriz_det[2][2]);
    } else {
        printf("Nose, mu complicao");
    }
}