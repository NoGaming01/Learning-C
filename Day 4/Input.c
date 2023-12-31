// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele
#include <stdio.h>

int main() {
    // Print a welcome message
    printf("Hello, World!\n");

    // Declare a variable to store the user's name
    char userName[50]; // Assuming the name won't exceed 50 characters

    // Prompt the user for input
    printf("What's your name? ");

    // Use scanf to get user input
    scanf("%s", userName);

    // Display a personalized greeting
    printf("Nice to meet you, %s! You Love Learning C with Github.\n", userName);

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Modify this program to take input for your age and display a message about learning C at your age.
// Hint: Declare an integer variable for age, prompt for input, and use %d in printf for displaying age.
