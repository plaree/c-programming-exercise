/*
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' 
in the first half of the word (including the middle letter if there is one). 
Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. 
If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, 
if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.
*/

#include <stdio.h>

int main() {
    char word[51];
    scanf("%s", word);

    int len = 0;
    while (word[len] != '\0') {
        len++;
    }

    int med = len / 2;
    int i = 0;
    int found = 0;
    while (i < len) {
        if (i <= med && (word[i] == 't' || word[i] == 'T')) {
            found = 1;
            printf("1");
            break;
        } else if (i > med && (word[i] == 't' || word[i] == 'T')) {
            found = 1;
            printf("2");
            break;
        }
        i++;
    }

    if (!found) {
        printf("-1");
    }

    return 0;
}



/*
#include<stdio.h>

int main(void){
    
char word[51];
int length = 0;
int med;


scanf("%s", word);
    while(word[length] != '\0'){
        length++;
    }
    if(length%2==1){
        med = (length/2)+1;
    }
    else{
        med = length/2;
    }
    int i = 0;
    while(word[i] != 't' || word[i] != 'T'){
        i++;
    }
    if(i<=med){
        printf("1");
    }
    else if(i>med){
        printf("2");
    }
    else{
        printf("-1");
    }



return 0;
}
*/