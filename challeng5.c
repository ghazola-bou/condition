#include <stdio.h>

int main() {
       int choie,anne;
       printf("Enter le number d'anne :");
       scanf("%d",&anne);
       printf("choosr\n");
       printf("1-Mois \n:");
       printf("2-Jours \n");
       printf("3-Heures \n");
       printf("5-Minutes \n");
       printf("6-Secondes \n");
       scanf("%d",&choie);
       switch(choie){
        case 1: printf("%d annes = %d mais\n ",anne,anne*12);
        break;
        case 2: printf("%d anne = %d jours \n",anne,anne*365);
        break;
        case 3: printf("%d anne = %d heures \n",anne , anne *365*24);
        break;
        case 4: printf("%d annes = %d Minutes\n ",anne,anne*365*24*60);
        break;
        case 5: printf("%d anne = %d secondes \n",anne,anne*365*24*60*60);
        break;
        default : printf("null");

       }
    
    return 0;
}