#include <print>
#include<iostream>

int main(){

    int choice,Range;

std::println("Welcome to Even Odd Seq");
std::println("Select What you want to generate!! ");
std::println("Enter the Range of Series!!");
std::cin>>Range;
std::println("1) Even number!!!");
std::println("2) Odd numbers !!!");
std::cin>>choice;
switch (choice)  
{
        case 1:
            for(int i=1 ; Range>=i; i++ ){

                if(i%2==0){
                    std::println("Even Number {}",i);
                }
            }
            break;
        case 2:
            for(int i=1;Range>=i;i++){
                if(i%2==1){
                    std::println("Odd Number {}",i);

                }
                
            }
        default:
            std::println("Wrong choice!!!!");
            break;
}






return 0; 

}