#include <stdio.h>

int main()
{
    int i = 2;
    int* ptr = &i;
    printf("the address of i is %p \n", &i);//change value to pointer
    printf("the address of i is %d \n", *ptr);//reverse back address and return value

    return 0;
}