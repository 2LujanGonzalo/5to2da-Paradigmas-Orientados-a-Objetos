#include <stdio.h>

int main(void)
{

int n,Es_primo,Nprimo;

printf("ingrese la cantidad de numeros primos: \n");
scanf("%d",&n);

if(n<0){
    printf("NO! ingrese un numero entero mayor a cero");
    return 0;
}
Nprimo=2;
while(n>0){
    Es_primo=1;
        for(int i=2;i<Nprimo;i++){
            if(Nprimo%i==0){
                Es_primo=0;
            }
        }
        if(Es_primo){
            printf("%d ",Nprimo);
            n--;
        }
        Nprimo++;
}
printf("\n");
    return 0;
}
