#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess;
    int attempts = 0;

    // Seed the random number generator using the current system time
    // This ensures a completely different secret number every time you play
    srand(time(0));

    // Generate a random number between 1 and 100
    secret_number = (rand() % 100) + 1;

    printf("==================================\n");
    printf("    WELCOME TO THE GUESSING GAME  \n");
    printf("==================================\n");
    printf("I have chosen a secret number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");

    // Game loop
    do {
        printf("Enter your guess: ");
        
        // Input validation: ensure the user enters an actual number
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a valid number.\n");
            // Clear input buffer to avoid an infinite loop on bad input
            while (getchar() != '\n');
            continue;
        }

        attempts++; // Increment the number of tries

        // Provide feedback based on the guess
        if (guess > secret_number) {
            printf("Too high! Try a lower number.\n\n");
        } 
        else if (guess < secret_number) {
            printf("Too low! Try a higher number.\n\n");
        } 
        else {
            printf("\n🎉 CONGRATULATIONS! You found it! 🎉\n");
            printf("The secret number was %d.\n", secret_number);
            printf("It took you exactly %d attempts to win.\n", attempts);
        }

    } while (guess != secret_number); // Keep looping until the guess matches

    return 0;
}