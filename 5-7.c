#include <stdio.h>
#include <math.h>

int main() {
    // take u, a, s as input
    float u, a, s;
    printf("Enter initial valocity: ");
    scanf("%f", &u);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    printf("Enter distance traveled: ");
    scanf("%f", &s);

    // calculate v using the given formula and display it
    printf("Final valocity: %.2f\n", sqrt((u * u) - (2 * a * s)));
    return 0;
}
