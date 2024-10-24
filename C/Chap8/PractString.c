#include <stdio.h>

int main()
{

    char st[30];

    

    fgets(st,sizeof(st),stdin);
    printf("%s", st);
    printf("This is String %s",st);

    return 0;
}