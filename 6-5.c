#include <stdio.h>

int main() {
    // take x as input
    float x, y;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    // calculate y following the given conditions
    if(x < 50)
        y = 2 * x + 100;
    else if(x == 50)
        y = 3 * x + 100;
    else
        y = 5 * x - 200;

    // display x and y
    printf("x = %.2f\ny = %.2f\n", x, y);
    return 0;
}
