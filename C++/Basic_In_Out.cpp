#include<print>
#include<iostream>


int main() {
    int a, b;

    std::println("Enter two numbers: ");  // print message
    std::cin >> a >> b;
    int sum = a + b;
    std::println("The sum of {} and {} is {}", a, b, sum);  // formatted output
}