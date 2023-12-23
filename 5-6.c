#include <stdio.h>

int main() {
    // take u, t, a as input
    float u, t, a;
    printf("Enter initial valocity: ");
    scanf("%f", &u);

    printf("Enter time taken: ");
    scanf("%f", &t);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    // calculate s using the given formula, and display it
    printf("Distance traveled: %.2f\n", (u * t) + (0.5 * a * t * t));
    return 0;
}
