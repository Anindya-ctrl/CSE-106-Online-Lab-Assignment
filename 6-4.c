#include <stdio.h>

int main() {
    // take 3 sides of triangle as input
    float a, b, c;
    printf("Enter the length of a: ");
    scanf("%f", &a);
    printf("Enter the length of b: ");
    scanf("%f", &b);
    printf("Enter the length of c: ");
    scanf("%f", &c);

    // check validity of triangle and output accordingly
    (a + b > c && b + c > a && c + a > b) ? printf("Given sides can form a triangle\n") : printf("Given sides cannot form a triangle\n");
    return 0;
}
