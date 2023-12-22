#include <stdio.h>

int main() {
    double a, b;
    printf("Enter number a: ");
    scanf("%lf", &a);
    
    printf("Enter number b: ");
    scanf("%lf", &b);
    
    printf("(a - b)² = %.2lf\na² + b² - 2ab = %.2lf\n", (a - b) * (a - b), a * a + b * b - 2 * a * b);
    return 0;
}
