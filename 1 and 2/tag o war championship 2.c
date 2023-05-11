// one to one enterance
#include<stdio.h>

int main(void){
    int i;
    int weight1, weight2;
    int numOfPlayers;
    int sum1, sum2;
    sum1 = 0;
    sum2 = 0;
   
    scanf("%d", &numOfPlayers);
    
    for(i = 0; i < numOfPlayers; i++){
        scanf("%d",&weight1);
        sum1 = sum1 + weight1; 
        scanf("%d",&weight2);
        sum2 = sum2 + weight2;
    }
    
    if(sum1 > sum2){
        printf("Team 1 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", sum1, sum2);
        
    }
    if(sum2 > sum1){
        printf("Team 2 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", sum1, sum2);
        
    }
    return 0;
}