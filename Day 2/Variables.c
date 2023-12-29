// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Variables are containers for storing data values, like numbers and characters.

/*
In C, there are different types of variables (defined with different keywords), for example:

int - int stores integers
float - float stores numbers with decimal, like 1.2, 3.7 and so on
char - char stores single characters, like 'a' or 'B'. Char values are surrounded by single quotes
*/
#include <stdio.h>

int main() {
    //! Examples of int variables
    int num1 = 1;
    int num2 = 98;
    int num3 = 1297;

    //! Examples of float variables
    float float1 = 1.2;
    float float2 = 23.48;
    float float3 = 823.834;

    //! Examples of char variables
    char char1 = 'a';
    char char2 = '$';
    char char3 = '@';

    //! Some more information

    // Changing Variable Values
    int myNum = 93;
    myNum = 100;

    // Making a Variable with no value
    int myVar;

    // Assigning value of a variable to another variable
    myVar = myNum;

    // Declaring multiple variables
    int x = 4, y = 13, z = 129;

    //! Using Variables in the code

    // Printing Variables in the code
    /*
    To use variables in printf() function you need to use 'Format Specifiers'.
    A format specifier starts with a percentage sign %, followed by a character.
    Like: %d or %i to print int, %c for char and %f for float.
    */
    printf("My int is %d, my float is %f and my char is %c.\n", num1, float1, char1); // \n is used to start a new line
    
    // Adding variables together
    int sum = myNum + myVar;
    printf("Sum of %d and %i is %d", myNum, myVar, sum);

    /*
    The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names
    
    Note: It is recommended to use descriptive names in order to create understandable and maintainable code.
    */
    // Good
    int minutesPerHour = 60;

    // It is fine but you can't say it is minutes and someone can think it is a month
    int m = 60;

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Calculate the Area of a Rectangle.
// Hint: Declare three variables (all integers, with the third one initially empty), multiply the first two variables, and assign the result to the third one. Use printf() to print the value of the third variable.
