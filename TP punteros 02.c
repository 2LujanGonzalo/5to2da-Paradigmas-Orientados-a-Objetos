#include <stdio.h>
int main(int argc, char const *argv[]) {
  int x,*y; //Declara la variable X y la varible Y
  x=10; // declara que X vale 10
  y=&x; //Le declara el lugar de la memoria de X
  printf("%d %d %d\n",y,*y,&y);// Imprime el lugar de memoria de Y, el contenido de Y que es 10 y el lugar de memoria de X
  return 0;
}
