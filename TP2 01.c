#include <stdio.h>

int main()
{
  int a,b;
  double suma(double, double);
  double multiplicacion(double, double);
  double division(double, double);
  int resto(int, int);
  
  printf("Ingrese 2 numeros separados por un espacio:\n");
  scanf("%d %d",&a,&b);
  
  //Suma
  printf("La suma es %.2f\n",suma(a,b));
  
  //multiplicacion
  printf("La multiplicacion vale %.2f\n",multiplicacion(a,b));

  //division
  printf("El cociente vale %.2f\n",division(a,b));
  
  //resto
  printf("El resto vale %d\n",resto(a,b));
  
}

double suma(double a, double b){
    return a+b;
}

double multiplicacion(double a,double b){
    return a*b;
}

double division(double a,double b){
    return a/b;
}

int resto(int a,int b){
    return a%b;
}