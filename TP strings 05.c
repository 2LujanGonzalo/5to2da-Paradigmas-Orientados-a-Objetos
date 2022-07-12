#include <stdio.h>
#include <string.h>

int main() {
char palabra1[100];
char palabra2[100];
char palabra3[100];
printf("Ingrese 2 palabras separas por un espacio\n");
scanf("%s %s",palabra1,palabra2);
printf("\n");
printf("%s %s \n",palabra1,palabra2 );
char temp[100];
if (strcmp(palabra1,palabra2)<0) {
  printf("%s %s\n",palabra1,palabra2);
}else{
  strcpy(temp,palabra1);
  strcpy(palabra1,palabra2);
  strcpy(palabra2,temp);
  printf("%s %s\n",palabra1,palabra2 );
}

  return 0;
}
