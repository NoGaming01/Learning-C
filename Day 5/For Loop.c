// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Explaining the use of for loops
// For loops are used for iterating over a range of values.
// The syntax is: for (initialization; condition; update)
// The loop executes as long as the condition is true.
// The initialization is done once at the beginning, and the update is done after each iteration.

// Nested for loops are used when you need to iterate in multiple dimensions, like rows and columns.

#include <stdio.h>

int main() {
    // Using a for loop to print numbers from 1 to 5
    printf("Printing numbers from 1 to 5:\n");
    for (int i = 1; i <= 5; ++i) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Using nested for loops to create a simple multiplication table
    printf("Multiplication Table:\n");
    for (int row = 1; row <= 5; ++row) {
        for (int col = 1; col <= 5; ++col) {
            printf("%d\t", row * col);
        }
        printf("\n");
    }
    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Create a program that calculates the sum of numbers from 1 to 10 using a nested for loop.
// Hint: Initialize a variable to store the sum, use two for loops, and update the sum in each iteration.
