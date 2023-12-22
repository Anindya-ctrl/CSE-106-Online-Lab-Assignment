#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        int current_digit = num % 10;
        sum += current_digit;
        num /= 10;
    }

    printf("Sum of the digits of the given integer = %d\n", sum);
    return 0;
}
