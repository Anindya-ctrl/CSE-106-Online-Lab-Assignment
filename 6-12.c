#include <stdio.h>

int main() {
    int r = 5;
    int x, y;
    printf("of the point (x, y);");
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    if(x*x + y*y < r*r)
        printf("the point lies within the circle\n");
    else if(x*x + y*y > r*r)
        printf("the point lies outside the circle\n");
    else
        printf("the point lies on the circle\n");

    return 0;
}
