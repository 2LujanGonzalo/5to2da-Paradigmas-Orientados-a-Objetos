#include <stdio.h>
#include <string.h> //string librería para trabajar caracteres

int main()
{
char palabra []="hola";
char palabra2 []={"buen"};
char palabra3 []={'d','i','a','\0'};//Falta el caracter nulo para que el printf sepa donde termina el string
printf("%s, \n%s \n%s",palabra, palabra2, palabra3);//Esto va a imprimir "hola buen dia"
return 0;
}
