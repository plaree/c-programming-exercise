/*
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. 
To do so, please write a C-program that takes as an input first the number of words in a text, followed by all of the words in the text. 
The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.

 

Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7
Input:
7
All cats are grey in the dark
Output:
4
*/

#include <stdio.h>

int main(void){
    
    int numWords;
    scanf("%d", &numWords);

    // En uzun kelimenin uzunluğunu takip etmek için bir değişken oluşturun
    int longestLength = 0;

    // Kelimeleri tutmak için bir karakter dizisi oluşturun
    char words[101];

    int i, l;
    for(i = 0; i < numWords; i++){
        // Kelimeyi okuyun
        scanf("%s", words);

        // Kelimenin uzunluğunu saymak için bir sayacı takip edin
        l = 0;
        while(words[l] != '\0'){
            l++;
        }

        // Eğer mevcut kelimenin uzunluğu en uzun kelime uzunluğundan daha uzunsa,
        // en uzun kelime uzunluğunu güncelleyin
        if (l > longestLength) {
            longestLength = l;
        }
    }

    // En uzun kelimenin uzunluğunu yazdırın
    printf("%d", longestLength);

    return 0;
}
