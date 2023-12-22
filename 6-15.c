#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter third number: ");
    scanf("%f", &c);

    float a_square = a * a;
    float b_square = b * b;
    float c_square = c * c;
    if(a_square + b_square == c_square || b_square + c_square == a_square || c_square + a_square == b_square)
        printf("given numbers form a pythagoras triplet\n");
    else
        printf("given numbers don't form a pythagoras triplet\n");

    return 0;
}
