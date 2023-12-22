#include <stdio.h>

int main() {
    double length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    printf("Area: %.2lf\nPerimeter: %.2lf\n", length * breadth, 2 * (length + breadth));
    return 0;
}
