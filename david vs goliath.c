#include<stdio.h>

int main(void){
    int i;
    int robot, result;
    int total = 0;
    int enginePower, res, weight, height;
 scanf("%d\n", &robot);
    for(i = 0; i < robot; i++){
        scanf("%d%d%d%d\n", &height, &weight, &enginePower, &res);
       result = (enginePower+res) * (weight-height);
       total = total + result;
    }
 printf("%d",total);    
 return 0;
}

