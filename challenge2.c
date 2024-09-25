 #include <stdio.h>

int main() {
    char  voyelle;
    printf(" Voyelle  et no :");
    scanf("%c",&voyelle );
    switch(voyelle){
        case 'A' : printf("A voyelle\n");
        break;
        case 'E' : printf("E  Voyelle \n");
        break;
         case 'O' : printf("O voyelle\n");
        break;
        case 'U' : printf("U  Voyelle \n");
        break;
         case 'Y' : printf("Y voyelle\n");
        break;
        default : printf("consonnes");
    }

    return 0;
}