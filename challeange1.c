#include <stdio.h>

int main() {
    int a;
    printf(" nombre est pair et impar ");
    scanf("%d",&a);
    if(a %2 == 0){
        printf("pair");
    }else{
        printf("impar");
    }

    return 0;
}