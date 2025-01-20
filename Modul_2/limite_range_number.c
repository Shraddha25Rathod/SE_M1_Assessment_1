/*Write a C program that implements a simple number guessing game. The program should
generate a random number between 1 and 100, and the user should guess the number
within a limited number of attempts.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

int main() {
    int number_to_guess, user_guess, attempts, max_attempts;

    srand(time(NULL));

    number_to_guess = generate_random_number(1, 100);

    max_attempts = 10;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("You have %d attempts to guess the number.\n", max_attempts);

    attempts = 0;
    while (attempts < max_attempts) {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        attempts++;

        if (user_guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else if (user_guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        }
    }

    printf("Sorry, you didn't guess the number. The number was %d.\n", number_to_guess);

    return 0;
}
