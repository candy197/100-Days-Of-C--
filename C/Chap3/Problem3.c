#include <stdio.h>

int main(){

    char ch = 'g' ;

    printf("character is %c \n",ch);
    printf("The ASCI values of character is:%d \n",ch);

    if(ch>=97 && ch <=122){
        printf("The Character is lowercase \n");
    }
    else{
        printf("This character is uppercase \n");
    }


    return 0;
}