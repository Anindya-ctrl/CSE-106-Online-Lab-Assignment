#include <math.h>
#include <stdio.h>

int main() {
    float u, a, s;
    double v;
    printf("Enter initial valocity: ");
    scanf("%f", &u);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    printf("Enter distance traveled: ");
    scanf("%f", &s);

    // use -lm flag on gcc for Linux, e.g.: `gcc 5-7.c -lm`
    v = sqrt((u * u) - (2 * a * s));
    printf("Final valocity: %.2f\n", v);
    return 0;
}
