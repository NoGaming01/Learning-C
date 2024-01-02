// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele
#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    // Get user input for the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate if the entered number is positive
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; // Return an error code
    }

    // Calculate factorial using a while loop
    while (num > 0) {
        factorial *= num;
        --num;
    }

    // Print the result
    printf("Factorial: %lld\n", factorial);

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Document this lecture (add comments).
