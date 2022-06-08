#include <stdio.h>

int main(void)
{
int largo=4,o=1;
printf("Ingrese el largo del vector:\n");
scanf("%d",&largo);
int a[largo],b[largo],min=9999,max=-9999,temp=0;

for(int i=0;i<largo;i++){
    printf("Ingrese valor de posicion %d:\n",i+1);
    scanf("%d",&a[i]);
}



while(o>0&&o<3){
printf("Como quiere ordenar el array?:\n1)Ascendentemente\n2)Descentemente\n3)Salir\n");
scanf("%d",&o);
    switch(o){
        case 1:
        
            for(int i=0;i<largo;i++){
                min = 9999;
                    for(int j=i;j<largo;j++){
                    if(a[j]<min){
                        min=a[j];
                        temp=a[i];
                        a[j]=temp;
                        a[i]=min;
                    }
                    }
            }
            
            for(int i=0;i<largo;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        break;
        case 2:
        
            for(int i=0;i<largo;i++){
                max = -9999;
                    for(int j=i;j<largo;j++){
                    if(a[j]>max){
                        max=a[j];
                        temp=a[i];
                        a[j]=temp;
                        a[i]=max;
                    }
                    }
            }
            
            for(int i=0;i<largo;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        break;
    }
}
    return 0;
}
