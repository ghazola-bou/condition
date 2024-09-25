#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,s,s_1,s_2,delta;
    printf("Equation du Deuxieme Degre a,b,c :");
    scanf("%lf %lf %lf",&a,&b,&c);

    delta = pow(b,2) - (4 * a * c);

    if(delta < 0){
      printf("there is no solution ");

    }else if(delta == 0){
          s = (-b)/(2*a);
          printf("one solution %.2lf",s);

    }else{
        s_1 = (-b - sqrt(delta))/(2 * a);
        s_2 = (-b + sqrt(delta))/(2 * a);

        printf("more than one solution %.2lf %.2lf",s_1,s_2);
    }
    return 0;
}