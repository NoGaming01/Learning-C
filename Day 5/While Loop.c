// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Explaining the use of while and do-while loops
// While loops are used for iterating as long as a condition is true.
// The syntax is: while (condition) { /* code */ }

// Do-while loops are similar, but the code inside the loop is executed at least once, even if the condition is false.
// The syntax is: do { /* code */ } while (condition);

#include <stdio.h>

int main() {
    // Using a while loop to print numbers from 1 to 5
    printf("Using a while loop to print numbers from 1 to 5:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // Using a do-while loop to get user input for a positive number
    printf("Using a do-while loop to get user input for a positive number:\n");
    int userInput;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &userInput);
    } while (userInput <= 0);
    printf("You entered a positive number: %d\n", userInput);

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Create a program that calculates the factorial of a number entered by the user using a while loop.
// Hint: Initialize a variable to store the factorial, use a while loop, and update the factorial in each iteration.
