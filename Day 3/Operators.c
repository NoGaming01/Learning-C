// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Operators are used to perform operations on variables and values.
/*
C divides the operators into the following groups:

1. Arithmetic operators
2. Assignment operators
3. Comparison operators
4. Logical operators
5. Bitwise operators
*/
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    // Arithmetic Operators
    // Arithmetic operators are used to perform common mathematical operations.
    /*
    + (Addition): Adds together two values
    - (Subtraction): Subtracts one value from another
    * (Multiplication): Multiplies two values
    / (Division): Divides one value by another
    % (Modulus): Returns the remainder of a division
    ++ (Increment): Increases the value of a variable by 1
    -- (Decrement): Decreases the value of a variable by 1
    */

    // Example of Addition
    int sum = x + y;
    printf("Addition Result: %d\n", sum);

    // Example of Subtraction
    int difference = x - y;
    printf("Subtraction Result: %d\n", difference);

    // Example of Multiplication
    int product = x * y;
    printf("Multiplication Result: %d\n", product);

    // Example of Division
    int quotient = x / y;
    printf("Division Result: %d\n", quotient);

    // Example of Modulus
    int remainder = x % y;
    printf("Modulus Result: %d\n", remainder);

    printf("Increment Result: %d\n", ++x);

    printf("Decrement Result: %d\n", --y);

    // Assignment Operators
    // Assignment operators are used to assign values to variables.
    /*
    = (Assignment): Assigns the value on the right to the variable on the left
    += (Addition Assignment): Adds the right operand to the left operand and assigns the result to the left operand
    -= (Subtraction Assignment): Subtracts the right operand from the left operand and assigns the result to the left operand
    *= (Multiplication Assignment): Multiplies the left operand by the right operand and assigns the result to the left operand
    /= (Division Assignment): Divides the left operand by the right operand and assigns the result to the left operand
    %= (Modulus Assignment): Takes the modulus of the left operand with the right operand and assigns the result to the left operand
    */

    // Example of Assignment
    int assignedValue = 7;
    printf("Assigned Value: %d\n", assignedValue);

    // Example of Addition Assignment
    assignedValue += 3;
    printf("After Addition Assignment: %d\n", assignedValue);

    // Example of Subtraction Assignment
    assignedValue -= 2;
    printf("After Subtraction Assignment: %d\n", assignedValue);

    // Example of Multiplication Assignment
    assignedValue *= 5;
    printf("After Multiplication Assignment: %d\n", assignedValue);

    // Example of Division Assignment
    assignedValue /= 2;
    printf("After Division Assignment: %d\n", assignedValue);

    // Example of Modulus Assignment
    assignedValue %= 3;
    printf("After Modulus Assignment: %d\n", assignedValue);

    // Comparison Operators
    // Comparison operators are used to compare two values.
    /*
    == (Equal to): Returns true if the two values are equal
    != (Not equal to): Returns true if the two values are not equal
    > (Greater than): Returns true if the left value is greater than the right value
    < (Less than): Returns true if the left value is less than the right value
    >= (Greater than or equal to): Returns true if the left value is greater than or equal to the right value
    <= (Less than or equal to): Returns true if the left value is less than or equal to the right value
    */

    // Example of Equal to
    int isEqual = (x == y);
    printf("Equal to Result: %d\n", isEqual);

    // Example of Not equal to
    int isNotEqual = (x != y);
    printf("Not equal to Result: %d\n", isNotEqual);

    // Example of Greater than
    int isGreater = (x > y);
    printf("Greater than Result: %d\n", isGreater);

    // Example of Less than
    int isLess = (x < y);
    printf("Less than Result: %d\n", isLess);

    // Example of Greater than or equal to
    int isGreaterOrEqual = (x >= y);
    printf("Greater than or equal to Result: %d\n", isGreaterOrEqual);

    // Example of Less than or equal to
    int isLessOrEqual = (x <= y);
    printf("Less than or equal to Result: %d\n", isLessOrEqual);

    // Logical Operators
    // Logical operators are used to perform logical operations.
    /*
    && (Logical AND): Returns true if both the left and right conditions are true
    || (Logical OR): Returns true if either the left or right condition is true
    ! (Logical NOT): Returns true if the condition is false, and false if the condition is true
    */

    // Example of Logical AND
    int logicalAndResult = (x > 0 && y < 20);
    printf("Logical AND Result: %d\n", logicalAndResult);

    // Example of Logical OR
    int logicalOrResult = (x < 0 || y > 20);
    printf("Logical OR Result: %d\n", logicalOrResult);

    // Example of Logical NOT
    int logicalNotResult = !(x == y);
    printf("Logical NOT Result: %d\n", logicalNotResult);

    // Bitwise Operators
    // Bitwise operators are used to perform bitwise operations on integers.
    /*
    & (Bitwise AND): Performs a bitwise AND operation
    | (Bitwise OR): Performs a bitwise OR operation
    ^ (Bitwise XOR): Performs a bitwise XOR (exclusive OR) operation
    ~ (Bitwise NOT): Inverts the bits of a number
    << (Left shift): Shifts the bits of a number to the left
    >> (Right shift): Shifts the bits of a number to the right
    */

    // Example of Bitwise AND
    int bitwiseAndResult = x & y;
    printf("Bitwise AND Result: %d\n", bitwiseAndResult);

    // Example of Bitwise OR
    int bitwiseOrResult = x | y;
    printf("Bitwise OR Result: %d\n", bitwiseOrResult);

    // Example of Bitwise XOR
    int bitwiseXorResult = x ^ y;
    printf("Bitwise XOR Result: %d\n", bitwiseXorResult);

    // Example of Bitwise NOT
    int bitwiseNotResultX = ~x;
    int bitwiseNotResultY = ~y;
    printf("Bitwise NOT Result for x: %d\n", bitwiseNotResultX);
    printf("Bitwise NOT Result for y: %d\n", bitwiseNotResultY);

    // Example of Left Shift
    int leftShiftResult = x << 1;
    printf("Left Shift Result: %d\n", leftShiftResult);

    // Example of Right Shift
    int rightShiftResult = y >> 1;
    printf("Right Shift Result: %d\n", rightShiftResult);

    // Sizeof Operator
    // The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Find the area of circle
// Hint: Declare three variables (one would be constant with value 3.14, and second would be float. Third one will be initially empty.), use the formula PI * radius * radius (these are the names of variables) and then assign it to the third variable. Use printf() function to print the answer.
