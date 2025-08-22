#include<print>
#include<iostream>


int Add(int a,int b){
    return a+b;
}
int Sub(int a,int b){
    return a-b;
}
int multi(int a,int b){
    return a*b;
}
int Div(int a,int b){
    return a/b;
}

int main()
{
    int num1,num2;
    std::println("Calculator in C++!! ");
    std::println("Enter First Number: ");
    std::cin>>num1;
    std::println("Enter First Number: ");
    std::cin>>num2;

    while (true)
    {
        int option;
        std::println("Select options from below to perform the opereation");
        std::println("1) Addition ");
        std::println("2) Substraction ");
        std::println("3) Division ");
        std::println("4) Multiplication ");
        std::cin>>option;
        switch (option)
        {
        case 1:
            std::println("Result of Addition {}",Add(num1,num2));
            break;
        case 2:
            std::println("Result of Substraction {}",Sub(num1,num2));
            break;
        case 3:
            std::println("Result of Division {}",Div(num1,num2));
            break;
        case 4:
            std::println("Result of Multiplication {}",multi(num1,num2));
            break;
       
    }
}
    
    return 0;
}