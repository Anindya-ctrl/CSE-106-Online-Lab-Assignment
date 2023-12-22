#include <math.h>
#include <stdio.h>

int main() {
    double radius, area, circumference;
    const double PI = M_PI;

    printf("Enter a radius: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of circle: %.2lf\nCircumference of circle: %.2lf\n", area, circumference);
    return 0;
}
