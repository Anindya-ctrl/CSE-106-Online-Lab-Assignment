#include <stdio.h>

int main() {
    // take length and breadth and input
    float length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // calculate area and perimeter, then display both
    printf("Area: %.2lf\nPerimeter: %.2lf\n", length * breadth, 2 * (length + breadth));
    return 0;
}
