#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int no_of_guess = 0;
    int randomNo = (rand() % 100) + 1;
    int guessed;

    // printf("Random Number : %d \n",randomNo);
    do
    {
        printf("Guess the Number :\n");
        scanf("%d", &guessed);
        if (guessed > randomNo)
        {
            printf("Lower Number Please! \n");
        }
        else
        {
            printf("Higher number Please! \n ");
        }
        no_of_guess++;
    } while (guessed != randomNo);
    printf("You Guessed the number in %d Guessess \n", no_of_guess);
    return 0;
}