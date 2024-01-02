// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess, attempts = 0;

    printf("Welcome to the Number Guesser Game!\n");
    printf("Try to guess the secret number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low. Try again!\n");
        } else {
            printf("Too high. Try again!\n");
        }

    } while (1);

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Document this lecture (add comments).
