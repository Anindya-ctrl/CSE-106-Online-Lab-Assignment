#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter angle a: ");
    scanf("%f", &a);
    printf("Enter angle b: ");
    scanf("%f", &b);
    printf("Enter angle c: ");
    scanf("%f", &c);

    if(a == b && b == c)
        printf("Triangle type: equilateral\n");
    else if(a == b || b == c || c == a)
        printf("Triangle type: isosceles\n");
    else if(a > 90 || b > 90 || c > 90)
        printf("Triangle type: obtuse\n");

    return 0;
}
