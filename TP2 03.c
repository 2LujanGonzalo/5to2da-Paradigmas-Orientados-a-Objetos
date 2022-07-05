#include <stdlib.h>
#include <stdio.h>
void ordenar(int *a,int *b,int *c,int *d,int *e);
int main() {
  int a,b,c,d,e;
  printf("Ingrese 5 numeros enteros con espacios\n");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  ordenar(&a,&b,&c,&d,&e);
  printf("Ordenados: %d %d %d %d %d\n",a,b,c,d,e);
  return 0;
}

void ordenar(int *a,int *b,int *c,int *d,int *e){
  int vector[5]={*a,*b,*c,*d,*e};

for (int i = 0; i < 5; i++) {
  for (int j = 0,k=1; k < 5; j++,k++) {
      if(vector[j]>vector[k]){
          int temp= vector[k];
          vector[k]= vector[j];
          vector[j]= temp;
      }
  }
}

*a=vector[0];
*b=vector[1];
*c=vector[2];
*d=vector[3];
*e=vector[4];
}
