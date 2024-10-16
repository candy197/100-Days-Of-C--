#include <stdio.h>

int main()
{
    // Table Problem
    int n;
    printf("enter the value of N \n");
    scanf("%d", &n);
    printf("Straight Table:\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    printf("Reverse Table:\n");
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    return 0;
}