#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        if(i % 2 == 0)
            sum -= 1.0 / i;
        else
            sum += 1.0 / i;
    }

    printf("sum of the suquence until %dth term = %.2f\n", n, sum);
    return 0;
}
