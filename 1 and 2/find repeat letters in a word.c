/*
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.

 

Examples
Input:
apple
Output:
1
 

Input:
keeper
Output:
1
 

Input:
erroneousnesses
Output:
5
*/

#include <stdio.h>

int main() {
    char word[51];
    int count = 0;

    
    scanf("%s", word);

    int length = strlen(word);
    for (int i = 0; i < length-1; i++) {
        for (int j = i+1; j < length; j++) {
            if (word[i] > word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < length-1; i++) {
        if (word[i] == word[i+1]) {
            count++;
            while (i < length-1 && word[i] == word[i+1]) {
                i++;
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char word[51];
    int count = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);
    // Sort the letters of the word alphabetically
    for (int i = 0; i < length-1; i++) {
        for (int j = i+1; j < length; j++) {
            if (word[i] > word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    // Check for multiple occurrences of letters
    for (int i = 0; i < length-1; i++) {
        if (word[i] == word[i+1]) {
            count++;
            // Skip over the next instance of the repeated letter
            while (i < length-1 && word[i] == word[i+1]) {
                i++;
            }
        }
    }

    printf("Number of letters occurring multiple times: %d\n", count);
    
    return 0;
}

*/