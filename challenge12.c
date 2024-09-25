#include <stdio.h>

int main() {
    int h,h1,m,m1,s,s1;
    printf("the result of the  first contestant :");
    scanf("%d %d %d",&h,&m,&s);
     printf("the result of the  second contestant :");
    scanf("%d %d %d",&h1,&m1,&s1);
    if(h < h1){
        printf("he is the first in the hour the first contestant \n");
    }else if(h>h1){
        printf("he is the first in the hour  second contestant \n");
    }else{
        printf("identical in the hour \n");
        if(m <m1){
             printf("he is the first in the minute the first contestant\n");
        }else if(m>m1){
            printf("he is the first in the minute second contestant\n");
        }else{
            printf("indntical in the minute \n");
            if(s<s1){
                printf("he is the first in the another the first contestant\n");
            }else if(s > s1){
                printf("he is the first in the another second contestant\n");
            }else{
                 printf("they are identical in the second \n");
            }
        }
    }
    

    return 0;
}