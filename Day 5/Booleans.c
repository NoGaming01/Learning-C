// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele

// Boolean is a logical data type that can have only the values true or false.
// You need to import stdbool.h to use booleans.
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Assigning few variables
    bool isLearningGood = true;
    bool isLeavingThingsGood = false;
    bool isSkippingBad;
    isSkippingBad = true;

    printf("%d", isLearningGood); // We use %d to print booleans as they are only 1 and 0.
    printf("%d", isLeavingThingsGood);
    printf("%d", isSkippingBad);

    // Comparing Values and Variables
    printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9

    // You can also compare two variables
    int x = 10;
    int y = 9;
    printf("%d", x > y);

    // You can also compare variables those arent numbers
    printf("%d", isLearningGood == isLeavingThingsGood);

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Make a system in which you add your age and it tells we can vote or not (1 for yes and 0 for no).
// Hint: Use scanf() function for user input.
