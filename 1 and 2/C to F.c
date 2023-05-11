#include<stdio.h>

int main(void){
   double C;
   double F;
   scanf("%lf",&C);
   F = C*(9.0/5.0) + 32;
   printf("%.1lf",F);
   return 0; 
}