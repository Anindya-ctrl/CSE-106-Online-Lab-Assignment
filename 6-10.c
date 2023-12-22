#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root_1, root_2;
    printf("For a quadratic equation of the form ax²+bx+c=0;\n");
    printf("Enter the coefficients a: ");
    scanf("%f", &a);
    printf("Enter the coefficients b: ");
    scanf("%f", &b);
    printf("Enter the coefficients c: ");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    if(d > 0) {
        root_1 = (-b + sqrt(d)) / (2 * a);
        root_2 = (-b - sqrt(d)) / (2 * a);
        printf("roots are real and distinct, roots = %.2f, %.2f\n", root_1, root_2);
    } else if(d == 0) {
        root_1 = root_2 = -b / (2 * a);
        printf("roots are equal, root = %.2f\n", root_1);
    } else {
        float real = -b / (2 * a);
        float imaginary = sqrt(-d) / (2 * a);
        printf("roots are complex and distinct, roots = %.2f + %.2fi, %.2f - %.2fi\n", real, imaginary, real, imaginary);
    }

    return 0;
}
