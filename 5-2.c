#include <math.h>
#include <stdio.h>

int main() {
    // take radius as input
    double radius, area, circumference;
    printf("Enter a radius: ");
    scanf("%lf", &radius);

    // caculate area and circumference, then display both
    printf("Area of circle: %.2lf\nCircumference of circle: %.2lf\n", M_PI * radius * radius, 2 * M_PI * radius);
    return 0;
}
