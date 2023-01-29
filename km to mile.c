#include<stdio.h>

int main(void){
    double km;
    double mile;
    //printf("please enter the distance (in kilometer)");
    scanf("%lf",&km);
    mile = km*0.621371;
    printf("%.6lf",mile);
    return 0;
}

//made by zoé and alp