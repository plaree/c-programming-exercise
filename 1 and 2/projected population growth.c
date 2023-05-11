#include<stdio.h>

int main(void){
    int pop;
    int iGrowth;
    double proPop;
    double growth;
    //printf("please enter the current population of the city...");
    scanf("%d", &pop);
    //printf("please enter the projected population growth as a percentage(either positive or negative)")
    scanf("%lf",&proPop);
    growth = pop*proPop / 100;
    iGrowth = (int) growth;
    printf("%d", pop + iGrowth);
    return 0;
}