#include <stdio.h>
void carga (int n, int Vector[]); //Declara la funcion "carga" y el tipo y la cantidad de variables recibidas
void imprimir (int n, int Vector[]); //Declara la funcion "imprimir" y el tipo y la cantidad de variables recibidas
int main()
{
int n=5;// declara la variable n con valor 5
int V[n]; // declara el vector V con n posiciciones
carga (n,V); //Llama a la funcion carga y le pasa el largo del vector y el vector a rellenar
imprimir (n,V); //Llama a la funcion imprmir y le pasa el largo del vector y el vector a imprimir
printf("\n");
for (int i=0; i<n; i++){
printf("%5d",V[i]); // Imprime el vector rellenado
}
return 0;
}
void carga (int n, int Vector[]){
int i;// Declara I
for (i=0; i<n; i++){
printf("ingrese el valor de la posicion %d: ",i);
scanf("%d",&Vector[i]); //Le pide al usuario que ingrese los valores dentro del vector
}
}
void imprimir (int n, int Vector[]){
for (int i=0; i<n; i++){
printf("\n %5d",Vector[i]);// Imprime el vector rellenado
}
printf("\n");
}
