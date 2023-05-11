/*The hostel in which you stop for the night changes its prices according to the age of the customer and the weight of their luggage. The rules are not very clear, so you decide to write a small program that will easily allow you and your travel companions to know the price of one night.

One room costs nothing if you are exactly 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.

Example
Input:
22
25
Output:
40*/


#include<stdio.h>
    int main(void){
        int luggage;
        int age;
        scanf("%d\n%d", &age, &luggage);
        if(age == 60){
            printf("0");
        }
        if(age < 10){
            printf("5");
        }
        if( age >= 10 && age != 60 && luggage <= 20){
            printf("30");
        }
        if( age >= 10 && age != 60 && luggage > 20){
            printf("40");
        }
        
        
        return 0;
    }

    /*
    -------------------------------------------- solition of tutor----------------------------------------------------
    #include <stdio.h>

int main(){
    int is60, isLessThan10, luggageMoreThan20;
	int age = 0;
	int luggageWeight = 0;

	scanf("%d %d", &age, &luggageWeight);

	is60 = age == 60;
	isLessThan10 = age < 10;
	luggageMoreThan20 = luggageWeight > 20;

	if(is60){
		printf("0");
	} else {
		if(isLessThan10){
			printf("5");
		} else {
			if(luggageMoreThan20){
				printf("40");
			} else {
				printf("30");
			}
		}
	}
	return 0;
}*/