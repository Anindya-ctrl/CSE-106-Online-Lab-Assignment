#include <stdio.h>

int main() {
    int n;
    float sum = (1.0/3.0) + (3.0/7.0);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 5;
    int denominator = 11;
    float sign = -1.0;

    for(int i = 3; i <= n; ++i) {
        sum += (sign * numerator) / denominator;
        numerator += 2;
        denominator += 4;
        sign *= -1.0;
    }

    printf("sum of the sequence: %.2f\n", sum);
    return 0;
}
