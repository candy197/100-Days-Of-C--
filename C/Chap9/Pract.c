#include <stdio.h>
#include <string.h>
struct Emp
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct Emp e1, e2;
    printf("Enter the value of code: \n");
    scanf("%d", &e1.code);
    printf("Enter the value of code: \n");
    scanf("%s", e1.name);
    printf("Enter the value of code: \n");
    scanf("%f", &e1.salary);
    printf("Name of the Emmployee is %s with EmpCode is %d and Salary is %.2f\n", e2.name, e1.code, e1.salary);

    return 0;
}