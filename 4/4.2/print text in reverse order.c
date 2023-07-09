/*
Your goal is to read a 68-word text from the input and then print it to the screen backwards. Individual words do not have to be spelled backwards, but rather your program should print out the last word first, then the second-to-last word, etc. No word has more than 40 characters.

Example
Input
Science Computer on Papers Selected Knuth, Ervin Donald ― correct." be will results the that reader a convince to and works algorithm an way the communicate to concepts, mathematical as well as forms literary and aesthetic traditional with works who essayist an ideally is programmer A clearly. them understand can beings human that so and quickly them perform can machines computing that so written are programs best "The

Output
"The best programs are written so that computing machines can perform them quickly and so that human beings can understand them clearly. A programmer is ideally an essayist who works with traditional aesthetic and literary forms as well as mathematical concepts, to communicate the way an algorithm works and to convince a reader that the results will be correct." ― Donald Ervin Knuth, Selected Papers on Computer Science
*/

#include <stdio.h>
#include <string.h>

#define MAX_WORDS 68
#define MAX_WORD_LENGTH 40

int main() {
    char text[MAX_WORDS][MAX_WORD_LENGTH];
    int numWords = 0;

    // Read input text
    char word[MAX_WORD_LENGTH];
    while (scanf("%s", word) == 1) {
        strcpy(text[numWords], word);
        numWords++;
    }

    // Print text in reverse order
    for (int i = numWords - 1; i >= 0; i--) {
        printf("%s ", text[i]);
    }

    return 0;
}
