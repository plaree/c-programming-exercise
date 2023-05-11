#include<stdio.h>

int main(void){
    double amountMoney;
    double price;
    double largestNum;
    int iLargest;
    scanf("%lf", &amountMoney);
    scanf("%lf", &price);
    largestNum = amountMoney / price;
    iLargest = (int) largestNum;
    printf("%d", iLargest);
    return 0;
}