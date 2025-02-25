#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    srand(time(0));
    printf("Welcome to the number guess game\n");
    random = rand() % 100 + 1;

    do
    {
        printf("Enter the guess number\n: ");
        scanf("%d", &guess);

        if (random > guess)
        {
            printf("Take a larger number\n");
        }
        else if (random < guess)
        {
            printf("Take a smaller number\n");
        }
        else
        {
            printf("Congrates you did it\n");
        }

    } while (random != guess);

    printf("Bye bye");
}