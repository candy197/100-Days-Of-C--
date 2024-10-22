#include <stdio.h>

int main()
{

    int count;
    printf("Enter How many Subject you want to enter: \n");
    scanf("%d", &count);
    int marks[count];
    for (int i = 0; i < count; i++)
    {
        printf("Enter a Mark for Subject %d: \n", i);
        scanf("%d", &marks[i]);
    }

    for(int i = 0;i<count;i++){
        printf("The value of index %d is %d \n",i,marks[i]);
    }

    for(int i = 0;i<count;i++){
        printf("The Address of  %d is %p \n",i,&marks[i]);
    }

    return 0;
}