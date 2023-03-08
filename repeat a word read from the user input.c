/*
Examples
Input:
2 Hello
Output:
Hello
Hello
 

Input:
4 thing
Output:
thing
thing
thing
thing
 
*/

#include<stdio.h>

int main(void){
    
    int time;
    char word[101];
    
    
    scanf("%d", &time);
    scanf("%s", word);
    
    for(int i=0;i<time;i++){
        printf("%s\n", word);
    }
    return 0;
}