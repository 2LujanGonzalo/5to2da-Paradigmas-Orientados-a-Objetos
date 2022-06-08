#include<stdlib.h>
#include<stdio.h>

int main(){
    int n, m = 1;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        m = i * m;
    }
    printf("%d ", m);
    return 0;
}