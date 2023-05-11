/*
You are responsible for a rail convoy of goods consisting of several boxcars. You start the train and after a few minutes you realize that some boxcars are overloaded and weigh too heavily on the rails while others are dangerously light. So you decide to stop the train and spread the weight more evenly so that all the boxcars have exactly the same weight (without changing the total weight). For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). Then your program should calculate and display how much weight to add or subtract from each car such that every car has the same weight. The total weight of all of the cars should not change. These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars. 

Example 1
In this example, there are 5 boxcars with different weights summing to 110.0. The ouput shows that we are modifying all the boxcars so that they each carry a weight of 22.0 (which makes a total of 110.0 for the entire train). So we remove 18.0 for the first boxcar, we add 10.0 for the second, we add 2.0 for the third, etc.

Input
5
40.0
12.0
20.0
5.0
33.0
Output
-18.0
10.0
2.0
17.0
-11.0
*/

#include<stdio.h>

int main(void){
    int i;
    int num_cars;
    double total_weight = 0;
    int array_place = 0;
    double weight;
    double avr;
    scanf("%d", &num_cars);
    int array[num_cars];
    
    for(i=0; i<num_cars; i++){
    scanf("%lf", &weight);
    array[array_place] = weight;
    array_place++;
    total_weight = total_weight + weight;
    }
    array_place = 0;
    avr = total_weight / num_cars;
    for(i=0; i<num_cars; i++){
      printf("%.1lf\n",avr - array[array_place]);
      array_place++;
    }
    return 0;
    
}