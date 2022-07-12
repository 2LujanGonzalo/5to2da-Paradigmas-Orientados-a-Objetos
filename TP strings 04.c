#include <stdio.h>
#include <string.h>
int main()
{
char palabra []="holis";
char palabra2 []={"buen"};
char palabra3 []={"buey"};
int dim=strlen(palabra);
int dim2=strlen(palabra2);
int dim3=strlen(palabra3);
int resultado;
printf("%s, \n%s \n%s",palabra, palabra2, palabra3);//Imprime los strings 'palabra', 'palabra2' y 'palabra3'
printf("\n%d %d %d", dim, dim2, dim3);//Imprime la longitud de los tres strings
resultado=strcmp(palabra, palabra2);//Compara los strings palabra y palabra2 y guarda lo que devuelve la funcion en una variable llamada resultado
printf("\n%d ", resultado);//Imprime el resultado en este caso un numero positivo
resultado=strcmp(palabra, palabra3);//Compara los strings palabra y palabra3 y guarda lo que devuelve la funcion en una variable llamada resultado
printf("\n%d ", resultado);//Imprime el resultado en este caso un numero positivo
resultado=strcmp(palabra2, palabra3);//Compara los strings palabra2 y palabra3 y guarda lo que devuelve la funcion en una variable llamada resultado
printf("\n%d ", resultado);//Imprime el resultado en este caso un numero negativo
return 0;
}
