#include <stdio.h>
void timesTwo(int);
int main(void) {
    //! showMemory(start=65520)
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("In main: You entered %d.\n", n);
    timesTwo(n);
    printf("In main: The value of n is %d.\n", n);
    return 0;
}

void timesTwo(int num) {
    printf("In the function: the number is %d.\n", num);
    num = num * 2;
    printf("In the function: the new number is %d.\n", num);
}

//it doesn't work properly, because we want to make the "n" 84 with the function, but it doesn't change in the main, 
//if we want it to change we should use, pointers!!!

/*------------THIS IS THE RIGHT VERSION--------------------
#include <stdio.h>
void timesTwo(int *);
int main(void) {
    //! showMemory(start=65520)
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("In main: You entered %d.\n", n);
    timesTwo(&n);
    printf("In main: The value of n is %d.\n", n);
    return 0;
}

void timesTwo(int * numptr) {
    printf("In the function: the number is %d.\n", *numptr);
    *numptr = *numptr * 2;
    printf("In the function: the new number is %d.\n", *numptr);
}
 */