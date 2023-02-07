#include<stdio.h>

int main(void){
    int dice1, dice2;
    scanf("%d\n", &dice1);
    scanf("%d", &dice2);
    int sum = dice1 + dice2;
    
    if(sum >= 10){
        printf("Special tax\n %d", 36);
    }
    if(sum < 10){
        printf("Regular tax\n %d", sum*2);
    }
    return 0;
}