#include <stdio.h>

int main(){
    //Marks If Else statement Problem
    int marks1,marks2,marks3,marks4;
    printf("enter marks1\n");
    scanf("%d",&marks1);
    printf("enter marks2\n");
    scanf("%d",&marks2);
    printf("enter marks3\n");
    scanf("%d",&marks3);
    printf("enter marks4\n");
    scanf("%d",&marks4);
    printf("The marks are %d, %d, %d and %d\n",marks1,marks2,marks3,marks4);

    if (marks1<33 || marks2<33 || marks3<33 || marks4<33)
    {
        printf("your failed due to less marks in individual Subjects\n");
    }
    else if (marks1 + marks2 + marks3 +marks4/4 < 40)
    {
        printf("Your Average is low due to that you failed\n");
    } 
    else {
        printf("Congrats Your Passec the exam\n");
    }
    

    return 0;
}