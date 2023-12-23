#include <stdio.h>

int main() {
    // take length and breadth as input
    double length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    // calculate the area and display it
    printf("Area of the rectangle: %.2lf\n", length * breadth);
    return 0;
}
