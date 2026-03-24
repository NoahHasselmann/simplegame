#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));

    int number;
    int correct_number = (rand() % 100) + 1;

    while (1) {
        printf("Input your number: \n");
        scanf("%d", &number);
    
        printf("The number is ");
        if (number > correct_number) {
            printf("lower! \n");
        }
        else if (number < correct_number) {
            printf("higher! \n");
        }
        else {
            printf("Correct number! Why? Why did you do this?");
            break;
        }
    }

    return 0;

}