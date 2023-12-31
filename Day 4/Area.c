// Make sure to join our Discord Server Binary Bit Lab. https://dsc.gg/binarybitlab
// By Nogaming01 | Skele
#include <stdio.h>

int main() {
    const float PI = 3.14;

    int side, length, width, radius;

    printf("Enter the side of the square: ");
    scanf("%d", &side);

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    int areaOfSquare = side * side;
    int areaOfRectangle = length * width;
    float areaOfCircle = (float) PI * radius * radius;

    printf("Area of Square with side %d is %d.\n", side, areaOfSquare);
    printf("Area of Rectangle with length %d and width %d is %d.\n", length, width, areaOfRectangle);
    printf("Area of Circle with radius %d is %.2f.\n", radius, areaOfCircle);

    return 0;
}

// Thats it for this lecture. Thanks for learning C with me.
// Homework: Document this lecture (add comments).
