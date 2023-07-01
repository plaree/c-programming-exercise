#include <stdio.h>
void printArray(int *, int);
int main(void) {
    //! showMemory(start=65520)
    int array[] = {6, 2, -4, 8, 5, 1};
    int N = 6;
    printArray(array, 6);
    return 0;
}

void printArray(int * ptr, int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%d ", *(ptr+i));
        // printf("%d ", ptr[i]); we ccan write like that and it will work too thanks to the pointer aritmatic
    }
    printf("\n");
}