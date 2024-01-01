// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// If-else statements in C are used for decision-making.
// The condition inside the if statement is evaluated.
// The condition inside the if statement is evaluated.
// If it's true, the code inside the if block is executed.
// Otherwise, the code inside the else block is executed.

#include <stdio.h>

int main() {
    // Using if conditions
    int age;

    // Asking the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Checking if a person can vote based on age
    if (age >= 18) {
        printf("You can vote! (1 for yes)\n");
    } else {
        printf("You can't vote yet. (0 for no)\n");
    }

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Create a program that checks if a number is positive, negative, or zero.
// Hint: Use if-else statements and the scanf function for user input.
