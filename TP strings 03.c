#include <stdio.h>
#include <string.h>
int main()
{
char palabra []="hola";
char palabra2 []={"buen"};
char palabra3 []={'d','i','a',' ','a',' ','t','o','d','o','s','\0'};//Falta el caracter nulo para que el printf sepa donde termina el string
char palabra4 []={'d','i','a',' ','a',' ','t','o','d','o','s','\0'};

int dim=strlen(palabra); //strlen MIDE LA LONGITUD DE LA PALABRA
int dim2=strlen(palabra2);
int dim3=strlen(palabra3);
int dim4=strlen(palabra4);

printf("%s, \n%s \n%s \n%s",palabra, palabra2, palabra4, palabra3);//Esto imprime "hola, buen dia a todos dia a todos"
printf("\n%d %d %d %d", dim, dim2, dim3, dim4);//Esto imprime el largo de cada uno de los strings

char copia[30];
strcpy(copia,palabra4); //strcpy COPIA UN STRING EN OTRO
printf("\n%s ", copia);//imprime el string copia
int longitud=strlen(copia);
printf("\n%d", longitud);//Imprime la longitud del string 'copia'
return 0;
}
