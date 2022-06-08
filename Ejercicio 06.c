#include<stdlib.h>
#include<stdio.h>

int main(){
    int m, d, count;
    printf("Ingrese un dia y mes\n");
    scanf("%d %d", &d, &m);
    if(m > 12 || m < 1){
        printf("El mes no es correcto");
        return 0;
        if(d > 31 || d < 1){
            printf("El dia no es correcto");
            return 0;
        }
    }
    switch(m){
    case 1:
            printf("%d", d);
            break;
    case 2:
            count = 31 + d;
            printf("%d", count);
            break;
    case 3:
            count = 31 + 28 + d;
            printf("%d", count);
            break;
    case 4:
            count = 31 + 28 + 31 + d;
            printf("%d", count);
            break;
    case 5:
            count = 31 + 28 + 31 + 30 + d;
            printf("%d", count);
            break;
    case 6:
            count = 31 + 28 + 31 + 30 + 31 + d;
            printf("%d", count);
            break;
    case 7:
            count = 31 + 28 + 31 + 30 + 31 + 30 + d;
            printf("%d", count);
            break;
    case 8:
            count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
            printf("%d", count);
            break;
    case 9:
            count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31  + d;
            printf("%d", count);
            break;
    case 10:
            count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30  + d;
            printf("%d", count);
            break;
    case 11:
            count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31  + d;
            printf("%d", count);
            break;
    case 12:
            count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
            printf("%d", count);
            break;

    }
    return 0;
}
