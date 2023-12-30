// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Constants are the variables whose values cant be changed.
#include <stdio.h>

int main() {
    // Making an constant
    const int num = 18;

    // Trying to change the value of the constant
    num = 20; // This will give an error

    // You should make variables as constant whose values can't be changed
    const float valueOfPI = 3.14;
    const char key = 'a';

    // An advice for making constant
    // You should make constant all uppercase.
    const char MYKEY = 's';

    // You must assign a value to constant variable
    // Correct way:
    const char SOMEONES_KEY = 'g';

    // Wrong way:
    const char API_KEY;
    API_KEY = 'k'; // This is not going to work

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
