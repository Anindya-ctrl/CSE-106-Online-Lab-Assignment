#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    float a_square = a * a;
    float b_square = b * b;
    float c_square = c * c;
    if(a_square + b_square == c_square || b_square + c_square == a_square || c_square + a_square == b_square)
        printf("provided triangle is right angled\n");
    else
        printf("provided triangle is not right angled\n");

    return 0;
}
