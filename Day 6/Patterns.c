// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele
#include <stdio.h>

int main() {
    // For Loop Patters
    int size = 5;

    for (int i = 0; i <= size; ++i) {
        for(int j = 0; j <= size; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= size; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("$ ");
        }
        printf("\n");
    }

    // While Loop Paterns
    int i = 0;

    while (i <= size) {
        int j = 0;
        while (j <= size) {
            printf("# ");
            ++j;
        }
        printf("\n");
        ++i;
    }

    i = 1;
    while (i <= size) {
        int j = 0;
        while (j < i) {
            printf("& ");
            ++j;
        }
        printf("\n");
        ++i;
    }

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Document this lecture (add comments).
