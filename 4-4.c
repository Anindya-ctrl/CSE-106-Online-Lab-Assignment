#include <stdio.h>

int main() {
    // accept input
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // display accepted number in decimal, octal and hexadecimal
    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);
    return 0;
}
