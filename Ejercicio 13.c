/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n=99,o=100,a[n][n],traza=0,t[n][n];
while(o!=5){
printf("Seleccione una opcion:\n");
printf("1)Ingrese la matriz.\n2)Calculo de la traza\n3)Muestra la matriz y su transpuesta\n4)Calculo de determinante\n5)SALIR\n");
scanf("%d",&o);

  //printf("Ingrese el las filas de la matriz cuadrada: ");
  //  scanf("%d",&n);
switch(o){
   case 1:
   
printf("Ingrese el las filas de la matriz cuadrada: ");
scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("Ingrese los valores de la matrz: ");
                scanf("%d",&a[i][j]);
            }
                
            }
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%5d ",a[i][j]);
            }
            printf("\n");
        }
    break;
    case 2:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%5d ",a[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    traza+=a[i][j];
                }
            }
        }
        printf("Traza=%d\n",traza);
    break;
    case 3:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%5d ",a[i][j]);
            }
            printf("\n");
        }
        printf("MATRIZ TRANSPUESTA: \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    t[i][j]=a[i][j];
                }else{
                    t[i][j]=a[j][i];
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%5d ",t[i][j]);
            }
            printf("\n");
        }
    break;
    
    case 4:
  
    break;
}


}    
    return 0;
}