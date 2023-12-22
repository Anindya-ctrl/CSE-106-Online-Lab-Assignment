#include <ctype.h>
#include <stdio.h>

int main() {
    char roman_letter;
    printf("Enter a roman letter: ");
    scanf("%c", &roman_letter);

    switch (toupper(roman_letter)) {
        case 'I':
            printf("%d\n", 1);
            break;
        case 'V':
            printf("%d\n", 5);
            break;
        case 'X':
            printf("%d\n", 10);
            break;
        case 'L':
            printf("%d\n", 50);
            break;
        case 'C':
            printf("%d\n", 100);
            break;
        case 'D':
            printf("%d\n", 500);
            break;
        case 'M':
            printf("%d\n", 1000);
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
