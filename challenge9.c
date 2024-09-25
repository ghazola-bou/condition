#include <stdio.h>

int main() {
    char num;
    printf("Vérification d'Alphabet :");
    scanf("%c",&num);
    if(num >=65 && num <= 95){
          printf("majusculle");
    }else if(num >=97 && num <= 122){
         printf("minuscule");
    }else{
        printf("not from the alphabet");
    }
       
    return 0;
}