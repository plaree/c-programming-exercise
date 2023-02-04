#include<stdio.h>

int main(void){
    int numOfPass;
    double gas;
    scanf("%d %lf", &numOfPass, &gas);
    
    if(numOfPass != 0){
        printf("%.2lf", (1 + gas)/(numOfPass +1));
    }
    else{
        printf("%.2lf", gas);
    }
    return 0;
}