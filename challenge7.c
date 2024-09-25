#include <stdio.h>

int main() {
    
    char alphabet;
     printf("Alphabet Majuscule :");
     scanf("%c",&alphabet);
     if(alphabet >= 65 && alphabet <= 95){
            printf("majusculle");
     }else{
        printf("minuscule");
     }
    return 0;
}