// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b;
    printf("Somme de Deux Valeurs :");
    scanf("%d",&a);
     printf("Somme de Deux Valeurs :");
    scanf("%d",&b);
    if(a == b){
        printf("%d ",(a+b)*3);
    }else{
        printf("%d",a+b);
    }

    return 0;
}