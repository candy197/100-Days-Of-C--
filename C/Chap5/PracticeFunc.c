#include <stdio.h>

// Example of Functions in C

int sum(int x, int y)
{

    printf("The sum is %d \n", x + y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;
    printf("Enter a first number: \n");
    scanf("%d", &a);
    printf("Enter a first number: \n");
    scanf("%d", &b);
    sum(a, b);

    return 0;
}