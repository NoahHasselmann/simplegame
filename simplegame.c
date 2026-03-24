#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int number;
    int correct_number = (rand() % 100) + 1;

    int counter = 0;

    while (1)
    {
        printf("Input your number: \n");
        if (!scanf("%d", &number))
        {
            printf("That is not a number!\n");
            continue;
        }
        
        counter++;
        printf("The number is ");
        if (number > correct_number)
        {
            printf("lower! \n");
        }
        else if (number < correct_number)
        {
            printf("higher! \n");
        }
        else
        {
            printf("Correct! You guessed the number in %d attempt(s).\n", counter);
            break;
        }
    }
    
    return 0;
}