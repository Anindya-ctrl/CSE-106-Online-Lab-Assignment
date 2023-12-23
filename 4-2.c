#include <stdio.h>

int main() {
    // accept said inputs
    int integer1, integer2;
    double double1, double2;
    printf("Enter first integer: ");
    scanf("%d", &integer1);
    printf("Enter second integer: ");
    scanf("%d", &integer2);
    printf("Enter first double: ");
    scanf("%lf", &double1);
    printf("Enter second double: ");
    scanf("%lf", &double2);

    // make integers left-justified, and doubles right justified, with 2 digits after the point
    printf("First integer: %-10d, Second integer: %-10d\n", integer1, integer2);
    printf("First double: %10.2lf, Second double: %10.2lf\n", double1, double2);
    return 0;
}
