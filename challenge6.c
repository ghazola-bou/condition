#include <stdio.h>

int main() {
    int num;
    printf("Positif, Negatif ou Nul:");
    scanf("%d",&num);
    if(num > 0){
        printf("Positif");
    }else if(num < 0){
        printf("Negatif");
    }else{
        printf("nul");
    }

    return 0;
}
