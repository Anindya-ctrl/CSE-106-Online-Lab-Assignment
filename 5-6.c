#include <stdio.h>

int main() {
    float u, t, a;
    printf("Enter initial valocity: ");
    scanf("%f", &u);

    printf("Enter time taken: ");
    scanf("%f", &t);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    printf("Distance traveled: %.2f\n", (u * t) + (0.5 * a * t * t));
    return 0;
}
