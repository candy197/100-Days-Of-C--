#include <stdio.h>

int main()
{

    int product = 1;
    int n;
    printf("Enter Fact No to find Factorial: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("The Factorial of %d is %d\n", n, product);

    return 0;
}