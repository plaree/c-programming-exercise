/*
Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:

1 meter = 3.2808 feet;

1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.

You may use functions to complete this exercise, but that is not required. However, you will need to use a comparison operation with characters, for example:

char letter = 'a';

if(letter == 'a') {...}

Example
The following entry indicates that there are four values to be converted. The first is 10 meters, which, when converted, gives approximately 32.808 feet. The second is 1245.243 grams, or about 2.745761 pounds, the third is 37.2 degrees Celsius, or 98.96 degrees Farenheit, and the fourth is 23 grams, or 0.050715 pounds.

Input
4
10 m
1245.243 g
37.2 c
23 g
 

Output
32.808000 ft
2.745761 lbs
98.960000 f
0.050715 lbs
*/

#include<stdio.h>

double input, output;
char letter;
double feet = 3.2808;
double pounds = 0.002205;

void m2ft(double input, double feet){
    output = input*feet;
    printf("%.6lf", output);
    printf(" ft\n");
}
void g2pounds(double input, double pounds){
    output = input*pounds;
    printf("%.6lf", output);
    printf(" lbs\n");
}
void c2fahrenheit(double input){
    output = (input*1.8)+32;
    printf("%.6lf", output);
    printf(" f\n");
}

int main(void){
    
    int num_input;
    scanf("%d", &num_input);
    int i;
    
    for(i=0;i<num_input;i++){
        scanf("%lf", &input);
        scanf(" %c", &letter);
        
        if(letter=='m'){
        m2ft(input, feet);
        }
        else if(letter=='g'){
        g2pounds(input, pounds);
        }
        else if(letter=='c'){
        c2fahrenheit(input);
        }
        
    }
    
    
    
    return 0;
}










/* program için bütün girdilierin girilmesini beklemeye gerek yok kısmını okumadığım için bu kadar uğraştım... bu da burada ibret olarak kalsın!!!  
#include<stdio.h>
void meter_func(double input, double feet);
void gram_func(double input, double pounds);
void tempurature_fun(double input, double fahrenheit);

double feet = 3.2808;
double pounds = 0.002205;
//double fahnreinheit;

int i,num_input;

int array[];
int l = 0;
char letter2[num_input][3];
int c = 0;

int main(void){
    
    
    double input, output;
    scanf("%d", &num_input);
    char letter;
    
    for(i=0;i<num_input;i++){
        scanf("%lf", &input);
        scanf("%s", letter);
        if(letter == 'm'){
            meter_func(input, feet);
        }
        else if(letter == 'g'){
            gram_func(input, pounds);
        }
        else if(letter == 'c'){
            tempurature_func(input);
        }
    }
    
    for(i=0;i<num_input;i++){
        printf("%.6lf" " %s", output)
    }
    
    return 0;
}

void meter_func(double input, double feet){
    output = input*feet;
    array[l] = output;
    l++;
    letter2[c] = {"ft"};
    c++;
    
    
}
void gram_func(double input, double pounds){
    output = input*pounds;
    array[l] = output;
    l++;
    
    letter2[c] = {"lbs"};
    c++;
    
   
}

void tempurature_func(double input){
    output = (input*1.8)+32;
    array[l] = output;
    l++;
    
    letter2[c] = {"f"};
    c++;
    
    
}
*/ 



