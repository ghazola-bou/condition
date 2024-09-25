#include <stdio.h>


int main() {
    int n;
    printf("sommen :");
    scanf("%d",&n);

   switch(n){
        case 1 : printf("lundi");
        break;
        case 2 : printf("Mardi");
        break;
         case 3 : printf("mercredi");
        break;
         case 4 : printf("jeudi");
        break;
         case 5 : printf("vendredi");
        break;
         case 6 : printf("samedi");
        break;
         case 7 : printf("dimanche");
        break;
        default : printf("null");
    }


    return 0;
}