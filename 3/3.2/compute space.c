/*
A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. These codes consist of either all integers, all decimal numbers, or all characters. The chief technology officer has warned you that the database is old and has limited space, so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.

Examples
Input:
3
10 i
7 c
12 d 
Output:
143 bytes
 

Input:
2
3 c
20 d
Output:
163 bytes
 
Input:
4
5 i
2 d
10 a
3 c
Output:
Invalid tracking code type 
*/

#include<stdio.h>


int num, i,input;
char inputType;

int count = 0;
int result = 0;
int controller = 1; // to check whether we were in else block

int integer(int); // prototype
int character(int); // prototype
int doubleNum(int); // prototype


int main(void){

scanf("%d", &num);


while(count<num){

    scanf("%d %c",&input, &inputType);
        if(inputType == 'i'){
            integer(input);
        }
        else if(inputType == 'c'){
            character(input);
        }
        else if(inputType == 'd'){
            doubleNum(input);
        }
        else{
            printf("invalid tracking code type");
            controller = 0;
        }
        count++;
    
    
}

if( controller != 0){
printf("%d bytes", result);
}
return 0;
}

int integer(int x){
    result = result + (4*x);
    return result;
}

int character(int x){
    result = result + x;
    return result;
}

int doubleNum(int x){
    result = result + (8*x);
    return result;
}







