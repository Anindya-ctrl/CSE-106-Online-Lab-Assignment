#include <stdio.h>

int main() {
    int num, res = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        int remainder = num % 10;
        res = res * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number of the provided number: %d\n", res);
    return 0;
}
