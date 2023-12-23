#include <stdio.h>

int main() {
    // take a, b as input
    float a, b;
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    
    // calculate the values of (a + b)² and a² + b² + 2ab, then display both
    printf("(a + b)² = %.2lf\na² + b² + 2ab = %.2lf\n", (a + b) * (a + b), a * a + b * b + 2 * a * b);
    return 0;
}
