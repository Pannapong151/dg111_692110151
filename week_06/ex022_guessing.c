#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main() {
    int target, guess, attempts = 0;
    srand(time(NULL)); 
    target = rand() % 100 + 1; 

    printf("=== Number Guessing Game (1-100) ===\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;x

        if (guess < target) {
            printf("Too low!\n");
        } else if (guess > target) {
            printf("Too high!\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != target);
}