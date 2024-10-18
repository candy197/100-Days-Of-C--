#include <stdio.h>

int main()
{

    int i = 4;
    int* j = &i; //address of I is assigned to then you can direclty use it
    printf("the address of i is %p \n ", &i);
    printf("the address of i is %p \n ", j);
    printf("The Value at address j is %p \n",&i);
    
    return 0;
}