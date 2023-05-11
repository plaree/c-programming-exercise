#include<stdio.h>

int main(void){
    int hour;
    scanf("%d", &hour);
    if(hour < 8){
        printf("%d", 10 + (hour*5));
    }
    else{
        printf("%d", 53);
    }
    return 0;
}