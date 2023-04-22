/*
The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.

Example
Input
10
4 3 6 2 6 8 9 8 5 4
Output
2
*/

#include <stdio.h>

int min(int a, int b);

int main(void) {
    int numInput, input, minNum;
    scanf("%d", &numInput);

    // Başlangıçta en küçük sayıyı belirlemek için ilk sayıyı okuyoruz.
    scanf("%d", &minNum);
    
    for (int i = 1; i < numInput; i++) {
        scanf("%d", &input);
        minNum = min(minNum, input); // En küçük sayıyı güncelliyoruz.
    }

    printf("%d", minNum);
    return 0;
}

// İki sayıdan en küçük olanını döndüren fonksiyon.
int min(int a, int b) {
    if (b < a) {
        return b;
    }
    return a;
}

/*
ilk sayıyı belirlemek için for dışında girdi almak aklıma gelmedi uzun bir süre;((((
*/

/*
#include <stdio.h>

int min(int, int);

int main(void) {
	int i;
	int minimum;
	int num;
	int a;

	scanf("%d", &num);
	scanf("%d", &minimum);

	for (i = 1; i < num; i++) {
		scanf("%d", &a);
		minimum = min(minimum, a);
	}
	printf("%d\n", minimum);

	return 0;
}

int min(int a, int b) {
    if (a < b){
	return a;
    }else{
	return b;
    }
}
*/