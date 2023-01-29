#include<stdio.h>

int main(void){
    int matches;
    int boxes;
    int fullBoxes;
    int remainings;
    scanf("%d\n%d\n", &matches, &boxes);
    fullBoxes = matches / boxes;
    remainings = matches % boxes;
    printf("%d\n%d\n", fullBoxes, remainings);
    return 0;
}