// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            sum += j;
        }
    }

    printf("The sum of numbers from 1 to 10 is: %d\n", sum);

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Document this lecture (add comments).
