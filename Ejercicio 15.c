#include <stdio.h>

int main()
{
    //declaracion de variables
int opcion1=1,opcionNR=1,opcionV=1,opcionM=1,Largo_vector=99,Largo_matriz=99,Vector_A[Largo_vector],Vector_B[Largo_vector],Es_primo,matriz_A[Largo_matriz][Largo_matriz],matriz_B[Largo_matriz][Largo_matriz],matriz_C[Largo_matriz][Largo_matriz];
float Numero_Real_1=0,Numero_Real_2=0;
while(opcion1<4 && opcion1>0 ){
    printf("Con que quiere trabajar?\n1)Numeros Reales\n2)Vectores\n3)matrices\n4)Salir\n");
    scanf("%d",&opcion1);
    
    switch(opcion1){
        //Numeros Reales
        case 1:
            printf("Ingrese 2 Numeros Reales:\n");
            scanf ("%f %f",&Numero_Real_1,&Numero_Real_2);
            while(opcionNR<5 && opcionNR>0 ){

            printf("Que quiere hacer?\n1)Sumarlos\n2)Multiplicarlos\n3)Dividirlos (a/b)\n4)Ingresar valores nuevamente\n5)Salir\n");
            scanf("%d",&opcionNR);
            switch(opcionNR){
                case 1:
                    printf("%.2f\n",Numero_Real_1+Numero_Real_2);
                break;
                case 2:
                    printf("%.2f\n",Numero_Real_1*Numero_Real_2);
                break;
                case 3:
                    printf("%.2f\n",Numero_Real_1/Numero_Real_2);
                break;
                case 4:
                    printf("Ingrese 2 Numeros Reales:\n");
                    scanf ("%f %f",&Numero_Real_1,&Numero_Real_2);
                break;
                
            }
            }
        break;
        case 2:
            printf("Ingrese el largo de la matriz:\n");
            scanf ("%d",&Largo_vector);
            for(int i=0;i<Largo_vector;i++){
            printf("Ingrese los valores de A:\n");
            scanf("%d",&Vector_A[i]);
            }
            for(int i=0;i<Largo_vector;i++){
            printf("Ingrese los valores de B:\n");
            scanf("%d",&Vector_B[i]);
            }
            
            while(opcionV<5 && opcionV>0){
            
            printf("Que quiere hacer?\n1)Restarlos (A-B)\n2)mencionar sus numeros primos\n3)Mencionar su paridad\n4)Ingresar valores nuevamente\n5)Salir\n");
            scanf("%d",&opcionV);
            switch(opcionV){
                case 1:
                    for(int i=0;i<Largo_vector;i++){
                        printf("%d ",Vector_A[i] - Vector_B[i]);
                    }
                    
                break;
                case 2:
                printf("Numeros primos de A:\n");

                for(int i=0;i<Largo_vector;i++){
                    Es_primo=1;
                    for(int j=2;j<Vector_A[i];j++){
                        if(Vector_A[i]%j==0){
                            Es_primo=0;
                        }
                    }
                    if(Es_primo){
                        if(Vector_A[i]==1){}else{
                        printf("%d ",Vector_A[i]);}
                    }
                }
                printf("\n");
                
                printf("Numeros primos de B:\n");

                for(int i=0;i<Largo_vector;i++){
                    Es_primo=1;
                    for(int j=2;j<Vector_B[i];j++){
                        if(Vector_B[i]%j==0){
                            Es_primo=0;
                        }
                    }
                    if(Es_primo){
                        if(Vector_B[i]==1){}else{
                        printf("%d ",Vector_B[i]);}
                    }
                }
                printf("\n");
                break;
                case 3:
                printf("Paridad de A:\n");
                    for(int i=0;i<Largo_vector;i++){
                        if(Vector_A[i]%2==0){
                            printf("%d es par\n",Vector_A[i]);
                        }else{
                            printf("%d es Impar\n",Vector_A[i]);
                        }
                        
                    }
                printf("Paridad de B:\n");
                    for(int i=0;i<Largo_vector;i++){
                        if(Vector_B[i]%2==0){
                            printf("%d es par\n",Vector_B[i]);
                        }else{
                            printf("%d es Impar\n",Vector_B[i]);
                        }
                    }
                break;
                case 4:
                printf("Ingrese el largo del vector:\n");
                scanf ("%d",&Largo_vector);
                for(int i=0;i<Largo_vector;i++){
                printf("Ingrese los valores de A:\n");
                scanf("%d",&Vector_A[i]);
                }
                for(int i=0;i<Largo_vector;i++){
                printf("Ingrese los valores de B:\n");
                scanf("%d",&Vector_B[i]);
                }
                break;
            }
            }
        break;
        case 3:
                printf("Ingrese el valor de N par ala matriz NxN:\n");
                scanf("%d",&Largo_matriz);
                for(int i=0;i<Largo_matriz;i++){
                    for(int j=0;j<Largo_matriz;j++){
                        printf("Valor de [%d][%d] de A:",i,j);
                        scanf("%d",&matriz_A[i][j]);
                    }
                }
                
                for(int i=0;i<Largo_matriz;i++){
                    for(int j=0;j<Largo_matriz;j++){
                        printf("Valor de [%d][%d] de B:",i,j);
                        scanf("%d",&matriz_B[i][j]);
                    }
                }
                
            while(opcionM<4 && opcionM>0){

                printf("Que quiere hacer?\n1)Sumarlas\n2)Multiplicarlas\n3)Ingresar los valores nuevamente\n4)Salir\n");
                scanf("%d",&opcionM);
                switch(opcionM){
                    case 1:
                        for(int i=0;i<Largo_matriz;i++){
                            for(int j=0;j<Largo_matriz;j++){
                                printf("%d ",matriz_A[i][j] + matriz_B[i][j]);
                            }
                            printf("\n");
                        }
                        
                    break;
                    case 2:
                        for(int i=0;i<Largo_matriz;i++){
                            for(int j=0;j<Largo_matriz;j++){
                                matriz_C[i][j]=0;
                            }
                        }
                        for (int i = 0; i < Largo_matriz; i++) {
                            for (int j = 0; j < Largo_matriz; j++) {
                                for (int k = 0; k < Largo_matriz; k++) {
                                    matriz_C[i][j]+=matriz_A[i][k]*matriz_B[k][j];
                                }
                            printf("%5d ",matriz_C[i][j] );
                            }
                        printf("\n");
                        }
                    break;
                    case 3:
                        printf("Ingrese el valor de N par ala matriz NxN:\n");
                        scanf("%d",&Largo_matriz);
                        for(int i=0;i<Largo_matriz;i++){
                            for(int j=0;j<Largo_matriz;j++){
                                printf("Valor de [%d][%d] de A:",i,j);
                                scanf("%d",&matriz_A[i][j]);
                            }
                        }
                
                        for(int i=0;i<Largo_matriz;i++){
                            for(int j=0;j<Largo_matriz;j++){
                                printf("Valor de [%d][%d] de B:",i+1,j+1);
                                scanf("%d",&matriz_B[i][j]);
                            }
                        }
                
                    break;
                }
            }
        break;
    }
}
    return 0;
}
