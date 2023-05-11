#include<stdio.h>

int main(void){
    double sementNeed;
    int price = 45;
    int bag = 120;
    double dBag;
    int iBag;
    scanf("%lf", &sementNeed);
    dBag = sementNeed / bag; 
    iBag = (int) dBag;
    printf("%d", (iBag+1)*price);
    return 0;
}