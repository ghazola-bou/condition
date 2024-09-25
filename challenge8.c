#include <stdio.h>

int main() {
    
    int num;
    printf("student mark :");
    scanf("%d",&num);
    if(num <10){
        printf("failed");
    }else if(num >=10 && num <12){
        printf("normal");
    }else if(num >=12 && num <14){
        printf("middle");
    }else if(num >=14 && num <16){
        printf("good");
    }else{
        printf("very good");
    }
    return 0;
}