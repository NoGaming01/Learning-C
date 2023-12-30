// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.
/*
There are two types of type conversion in C:
1. Implicit Conversion (automatically)
2. Explicit Conversion (manually)
*/
#include <stdio.h>

int main() {
    // Example of type conversion
    int x = 7;
    int y = 2;
    int division = 7 / 2;
    printf("%d\n", division); // This will give the result in int

    // Implicit Conversion
    // Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
    // For example:
    int myNum = 19.39;
    printf("%d\n", myNum); // It will give the output as 19 not 19.390000

    float mySum = 5 / 2;
    printf("%f\n", mySum); // The result would be 2.000000 and not 2.500000. Why? Because you need to manually convert the integer in float

    // Explicit Conversion
    // Explicit conversion is done manually by placing the type in parentheses () in front of the value.
    // Lets correct the above example
    float myCorrectSum = (float) 5 / 2;
    printf("%f\n", myCorrectSum); // This will print 2.500000. Why not 2.5? You can use decimal precision to get 2.5
    /*
    You can use this example like this also:
    int num1 = 5;
    int num2 = 2;
    float myVar = (float) num1 / num2;
    printf("%f", myVar); 
    */

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Use floating values to find the area of rectangle and print them in int type.
// Hint: Use explicit conversion.
