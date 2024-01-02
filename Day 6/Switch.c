// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// This program demonstrates the use of the switch statement in C.
// The switch statement is useful when you have multiple cases and want to execute different blocks of code based on the value of an expression.

// Switch Statements
/*
switch(expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
}
*/

// The switch expression is evaluated once
// The value of the expression is compared with the values of each case
// If there is a match, the associated block of code is executed
// The break statement breaks out of the switch block and stops the execution
// The default statement is optional, and specifies some code to run if there is no case match

#include <stdio.h>

int main() {
    int day = 2;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Day\n");
    }

    // The break Keyword
    /*
    When C reaches a break keyword, it breaks out of the switch block.
    This will stop the execution of more code and case testing inside the block.
    When a match is found, and the job is done, it's time for a break. There is no need for more testing.
    */

    // The default Keyword
    // The default keyword specifies some code to run if there is no case match.

    day = 4;

    switch (day) {
        case 6:
            printf("Today is Saturday");
            break;
        case 7:
            printf("Today is Sunday");
            break;
        default:
            printf("Looking forward to the Weekend");
    }

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Create a switch statement for the months of the year (1-12). Print the name of the month for the given number. Provide a default case for an invalid month.
// Hint: You can use the same structure as the day switch examples.
