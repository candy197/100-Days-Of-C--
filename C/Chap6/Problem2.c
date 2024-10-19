#include <stdio.h>

int return4(int *ptr)
{

    printf("the value of ptr is %p\n", ptr);
    printf("the value of ptr is %d\n", *ptr);
}

int main()
{
    int i = 2;
    int *ptr = &i;
    printf("the address of i is %p \n", &i);   // change value to pointer
    printf("the address of i is %d \n", *ptr); // reverse back address and return value
    return4(ptr);
    return 0;
}