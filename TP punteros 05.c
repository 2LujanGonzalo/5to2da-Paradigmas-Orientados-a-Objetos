#include <stdio.h>
#define M 99

void ingreso_matrices(int n,int matriz[M][M]);
void print_matriz(int n,int matriz[M][M]);
void suma_matrices(int n,int matriz_sum_a[M][M],int matriz_sum_b[M][M]);
void multiplicacion_matrices(int n,int matriz_mul_a[M][M],int matriz_mul_b[M][M]);
void determinante(int n,int matriz[M][M]);
void transponer_matrices(int n,int matriz[M][M]);
void set_mat_0(int n,int matriz[M][M]);

int main(){
    int o=1,n=99,matriz_a[n][n],matriz_b[n][n];
    while(o>0 && o<7){
    printf("Que desea hacer?\n1)Ingresar 2 matrices\n2)Mostrar las 2 matrices\n3)Suma de matrices\n4)Multiplicacion de matrices\n5)Calcular su determinante\n6)Transponer las matrices\n7)SALIR\n");
    scanf("%d",&o);
        switch (o) {
          case 1:
            printf("Ingrese el largo y alto de las matrices cuadradas\n");
            scanf("%d",&n);
            printf("Datos de la matriz A:\n");
            ingreso_matrices(n,matriz_a);
            printf("Datos de la matriz B:\n");
            ingreso_matrices(n,matriz_b);
          break;
          case 2:
            printf("Matriz A:\n");
            print_matriz(n,matriz_a);
            printf("\n\nMatriz B:\n");
            print_matriz(n,matriz_b);
          break;
          case 3:
            suma_matrices(n,matriz_a,matriz_b);
          break;
          case 4:
            multiplicacion_matrices(n,matriz_a,matriz_b);
          break;
          case 5:
            printf("\n\nDeterminante de la matriz A= ");
            determinante(n,matriz_a);
            printf("\n\nDeterminante de la matriz B= ");
            determinante(n,matriz_b);
              printf("\n\n");
          break;
          case 6:
            printf("\n\nMatriz A transpuesta :\n");
            transponer_matrices(n,matriz_a);
            printf("\n\nMatriz B transpuesta:\n");
            transponer_matrices(n,matriz_b);
            printf("\n\n");
          break;
        }
    }

    return 0;
}

void ingreso_matrices(int n,int matriz[M][M]) {
for (int i=0; i<n; i++) {
  for (int j=0; j<n; j++) {
    printf("Ingresa la entrada [%d][%d]: ", i+1, j+1);
    scanf("%d", &matriz[i][j]);
    }
  }
}

void print_matriz(int n,int matriz[M][M]){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d",matriz[i][j]);
    }
    printf("\n");
  }
}

void suma_matrices(int n,int matriz_sum_a[M][M],int matriz_sum_b[M][M]){
  int matriz_sum_res[M][M];
  set_mat_0(n,matriz_sum_res);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matriz_sum_res[i][j]=matriz_sum_a[i][j]+matriz_sum_b[i][j];
    }
  }
  printf("Suma=\n");
  print_matriz(n,matriz_sum_res);
}

void set_mat_0(int n,int matriz[M][M]){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matriz[i][j]=0;
    }
  }
}

void multiplicacion_matrices(int n,int matriz_mul_a[M][M],int matriz_mul_b[M][M]) {
int matriz_mul_res[M][M];
set_mat_0(n,matriz_mul_res);
for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) {
      matriz_mul_res[i][j]+=matriz_mul_a[i][k]*matriz_mul_b[k][j];
    }
  }
}

printf("Multiplicacion=\n");
print_matriz(n,matriz_mul_res);
}

void determinante(int n,int matriz[M][M]){

  if(n==1){
      printf("%d\n",matriz[0][0]);
  }else if (n==2) {
    printf("%d\n",(matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]) );
  } else if (n==3) {
    printf("%d \n",matriz[0][0]*matriz[1][1]*matriz[2][2]+matriz[0][1]*matriz[1][2]*matriz[2][0]+matriz[0][2]*matriz[1][0]*matriz[2][1]-matriz[0][2]*matriz[1][1]*matriz[2][0]-matriz[0][0]*matriz[1][2]*matriz[2][1]-matriz[0][1]*matriz[1][0]*matriz[2][2]);
  } else {
    printf("Nose, mu complicao\n");
  }
}

void transponer_matrices(int n,int matriz[M][M]){
int matriz_transpuesta[M][M];
set_mat_0(n,matriz_transpuesta);
for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    matriz_transpuesta[i][j]=matriz[j][i];
  }
}

print_matriz(n,matriz_transpuesta);
}
