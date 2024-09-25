#include <stdio.h>
#include <math.h>

int main() {
      float x1,x2,y1,y2,z1,z2,Distance;
      printf("number x1 :");
      scanf("%f",&x1);
      printf("number x2 :");
      scanf("%f",&x2);
      printf("number y1 :");
      scanf("%f",&y1);
      printf("number y2 :");
      scanf("%f",&y2);
      printf("number z1 :");
      scanf("%f",&z1);  
      printf("number z2 :");
      scanf("%f",&z2);
      Distance = sqrt(pow(x2 -x1,2) + pow(y2 - y1 ,2) + pow(z2 - z1,2));
      printf("%.2f",Distance);
    return 0;
}