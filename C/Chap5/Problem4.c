#include <stdio.h>

int fibocacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibocacci(n - 1) + fibocacci(n - 2);
}

int main()
{
    int n = 4;
    printf("the value of fibonacicce Series %d is %d \n", n, fibocacci(n));

    return 0;
}