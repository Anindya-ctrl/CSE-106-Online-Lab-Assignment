#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    if(a == b && b == c)
        printf("Triangle type: equilateral\n");
    else if(a == b || b == c || c == a)
        printf("Triangle type: isosceles\n");
    else
        printf("Triangle type: scalene\n");

    return 0;
}
