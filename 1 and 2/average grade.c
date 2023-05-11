#include<stdio.h>

int main(void){
    int grade;
    int iTotal = 0;
    int gradesNum;
    double dTotal;
    int i;
    scanf("%d",&gradesNum);
    for(i = 0; i < gradesNum; i++){
        scanf("%d",&grade);
        iTotal = iTotal + grade;
    }
    dTotal = (double) iTotal;
    printf("%.2lf", dTotal/gradesNum);
    return 0;
}