#include <stdio.h>
#include <stdbool.h>
//1 SUMAR MATRICES // 2 MULTIPLICAR MATRICES // 3 DETERMINANTE  // 4 ORDEN DE VECTOR PAR E IMPAR // AÑO BISIEST0 (6)

int ingreso_matrices(int,int);
int suma_matrices(int,int);
int multiplicacion_matrices(int,int);
void determinante();
void orden_vector();
bool bisiesto(int);

int main(){

    int o=1,n=99,m=99,r=99,cont_par=99,cont_imp=99,year,matriz_sum_a[n][n],matriz_sum_b[n][n],matriz_mul_a[n][m],matriz_mul_b[m][r],matriz_mul_res[n][r],vector[n],aux,vector_imp[cont_imp],vector_par[cont_par];
    while(o!=6){
        printf("Elija una opcion:\n");
        printf("1)Suma de matrices\n2)multiplicacion de matrices\n3)Determinante de una matriz\n4)Ordenar un vector\n5)Saber si un año es bisiesto\n");
        scanf("%d",&o);
        switch(o){
            case 1:
            
            printf("Ingrese el largo y alto de la matriz:\n");
            scanf("%d",&n);
            
            for (int i = 0; i < n; i++) {
              for (int j = 0; j <n; j++) {
                matriz_sum_a[i][j]=ingreso_matrices(n,n);
              }
            }
            for (int i = 0; i < n; i++) {
              for (int j = 0; j <n; j++) {
                matriz_sum_b[i][j]=ingreso_matrices(n,n);
              }
            }
            //SUMA DE MATRICES
            for (int i = 0; i < n; i++) {
              for (int j = 0; j < n; j++) {
                printf("%d ",suma_matrices(matriz_sum_a[i][j],matriz_sum_b[i][j]));
                
              }
            printf("\n");
            }
            break;
            case 2:
            printf("Ingrese el alto de la matriz A:\n");
            scanf("%d",&n);
            printf("Ingrese el largo de la matriz A y alto de la matriz B:\n");
            scanf("%d",&m );
            printf("Ingrese el largo de la matriz B:\n");
            scanf("%d",&r);
            for (int i = 0; i < n; i++) {
              for (int j = 0; j <m; j++) {
                matriz_mul_a[i][j]=ingreso_matrices(n,m);
              }
            }
            for (int i = 0; i < m; i++) {
              for (int j = 0; j <r; j++) {
                matriz_mul_b[i][j]=ingreso_matrices(m,r);
              }
            }
            //Hago que la matriz resultado de la suma sea cero
            for (int i = 0; i < n; i++) {
              for (int j = 0; j < r; j++) {
                matriz_mul_res[i][j]=0;
              }
            }
            //MULTIPLICACION DE MATRICES
            for (int i = 0; i < n; i++) {
              for (int j = 0; j < r; j++) {
                for (int k = 0; k < m; k++) {
                  matriz_mul_res[i][j]+=multiplicacion_matrices(matriz_mul_a[i][k],matriz_mul_b[k][j]);
                }
              }
            }
            //IMPRESION DEL RESULTADO
            for (int i = 0; i < n; i++) {
              for (int j = 0; j < r; j++) {
                printf("%d ",matriz_mul_res[i][j] );
              }
              printf("\n");
            }
            break;
            case 3:
            determinante();
            break;
            case 4:
            orden_vector();
            break;
            case 5:
             printf("Ingrese un año:\n");
             scanf("%d",&year);
             if (bisiesto(year)==false) {
               printf("No es bisiesto\n");
             } else if (bisiesto(year)==true) {
               printf("Es bisiesto\n");
             } else {
               printf("No es bisiesto\n");
             }
            break;
        }
    }

}

int ingreso_matrices(int largo,int alto){
    int num;
            printf("Ingrese el valor \n");
            scanf("%d",&num);
            return num;
       
}

int suma_matrices(int a,int b){
    return a+b;
}

int multiplicacion_matrices(int a,int b){
    return a*b;
}

void determinante(){
    int largo=99,matriz_det[largo][largo];
printf("Ingrese el largo y alto de la matriz:\n");
            scanf("%d",&largo);
            
            for (int i = 0; i < largo; i++) {
              for (int j = 0; j <largo; j++) {
                matriz_det[i][j]=ingreso_matrices(largo,largo);
              }
            }
            if(largo==1){
                printf("%d\n",matriz_det[0][0]);
            }else if (largo==2) {
              printf("%d\n",(matriz_det[0][0]*matriz_det[1][1])-(matriz_det[0][1]*matriz_det[1][0]) );
            } else if (largo==3) {
              printf("%d \n",matriz_det[0][0]*matriz_det[1][1]*matriz_det[2][2]+matriz_det[0][1]*matriz_det[1][2]*matriz_det[2][0]+matriz_det[0][2]*matriz_det[1][0]*matriz_det[2][1]-matriz_det[0][2]*matriz_det[1][1]*matriz_det[2][0]-matriz_det[0][0]*matriz_det[1][2]*matriz_det[2][1]-matriz_det[0][1]*matriz_det[1][0]*matriz_det[2][2]);
            } else {
              printf("Nose, mu complicao\n");
            }
}

void orden_vector(){
    int l=99, min,max,v[l],temp;
    	printf("Ingrese el largo del vector:\n");
					scanf(" %d", &l);

					//Rellenando el vector
					printf("Ingrese los valores del vector:\n");
					for (int i = 0; i < l; ++i){
						scanf(" %d", &v[i]);
					}

					//Imprimiendo los pares				
					for(int i = 0; i < l; i++){
				        min = 999999;   
				        for(int j = i; j < l; j++){
				        	//El if envia los pares a la posicion i del vector empezando por el más chico
				        	if(v[j] < min && v[j] % 2 == 0){
				              min = v[j];
				              temp = v[i];
				              v[i] = min;
				              v[j] = temp;
				            }	            
				        }
				        //Imprime esos pares
				        if(v[i] % 2 == 0){
				        	printf("%d ", v[i]);
				        }
				    }

				    //Imprimiendo los impares				
					for(int i = 0; i < l; i++){
				        max = -999999;   
				        for(int j = i; j < l; j++){
				        	//El if envia los impares a la posicion i del vector empezando por el más grande
				        	if(v[j] > max && v[j] % 2 != 0){
				              max = v[j];
				              temp = v[i];
				              v[i] = max;
				              v[j] = temp;
				            }	            
				        }
				        //Imprime esos impares
				        if(v[i] % 2 != 0){
				        	printf("%d ", v[i]);
				        }
				    }
				    printf("\n\n\n");
}

bool bisiesto(int a){
    if(a%100==0){
        return false;
    }else if(a%6==0){
        return true;
    }else{
        return false;
    }
}