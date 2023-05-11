/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places.

 

Example
There are 4 ingredients and they all have a different price per pound: 9.90, 5.50, 12.0, and 15.0. You must take 0.25 lbs of the first, 1.5 lbs of the second, 0.3 lbs of the third and 1 lb of the fourth. It will cost exactly $29.325000.

Input:
4
9.90 5.50 12.0 15.0
0.250 1.5 0.300 1.0
Output:
29.325000
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

Note
You may submit your solution as many times as you wish. Only your highest score will be kept.
*/


// ----------------------------------ARRAYLERİ DOUBLE OLARAK AÇMAM GEREKTİĞİNİ BİLMEDİĞİM İÇİN SAATLERCE UĞRAŞTIM--------------------------------
#include<stdio.h>

int main(void){
    
    int i;
    int num_ingredients;
    double price;
    double weight;
    int count = 0;
    double sum = 0;
    
    scanf("%d", &num_ingredients);
    double array1[num_ingredients];
    double array2[num_ingredients];
    double array3[num_ingredients];
    
    for(i=0; i<num_ingredients; i++){
        scanf("%lf", &price);
    array1[count] = price;
    count++;
        
    }
    count = 0;
    
    for(i=0;i<num_ingredients; i++){
        scanf("%lf", &weight);
    array2[count] = weight;
    count++;
    }
    count = 0;
    
    for(i=0;i<num_ingredients;i++){
    array3[count] = array1[count] * array2[count];
    count++;
    }
    count = 0;
    
    for(i=0;i<num_ingredients;i++){
     sum = sum + array3[count];   
    count++;
    }
     printf("%.6lf", sum); 

    return 0;
}

/*
-----------------------------------------tek array ile de yapılabilir...----------------------------------------
#include <stdio.h>

int main()
{
    int nbIngredients=0;
    int i, idIngredient;
    double price[10];
    double totalPrice = 0.0;
    double readPrice=0.0;

    scanf("%d", &nbIngredients);

    for(i = 0; i < nbIngredients; i++){
        scanf("%lf",&readPrice);
        price[i] = readPrice;
    }

    for (idIngredient = 0; idIngredient < nbIngredients; idIngredient++)
    {
        double quantity;
        scanf("%lf\n",&quantity);
        totalPrice = totalPrice + price[idIngredient] * quantity;
    }
    printf("%lf\n",totalPrice);

    return 0;
}
*/