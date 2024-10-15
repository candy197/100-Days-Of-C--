#include <stdio.h>

int main(){

    //income tax apply

    int income;
    float tax=0;
    printf("enter Income: \n");
    scanf("%d",&income);
    if(income < 250000){
        printf("Zero Tax you have to paid");
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income < 500000 && income<=1000000)
    {
        tax = 0.05 * (500000 - 250000)+0.2*(income-500000);
    }

    else{
        tax = 0.05 * (500000 - 250000)+0.2*(1000000-500000) + 0.3 *(income-100000);
    }
    printf("The total tax you have to pay is : %.2f\n",tax); //.2 is denoted as decimle place how much you want
    
    return 0;
}