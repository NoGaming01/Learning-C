// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Make sure to learn about Variables before Data Types.

// A variable must be a specified data type, and used with a format specifier in printf() function to display it.
#include <stdio.h>

int main() {
    //! Types of Data Types
    /*
    int: Stores whole numbers, without decimals
    float: Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
    double: Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
    char: Stores a single character/letter/number, or ASCII values
    */

    //! Examples of Data Types
    int myNum = 3783;             // Integer (whole number)
    float myFloatNum = 239;   // Floating point number
    char myLetter = 'S';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    //! Set Decimal Precision
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits

    return 0;
}

// Thats it for this leature. Thanks for learning C with me.
// Homework: Make variables of different Data Types and use them.
