#include <stdio.h>

int main() {
    int num;
    printf("Enter a number between 1 and 5 (inclusive): ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("Red\n");
            break;
        case 2:
            printf("Blue\n");
            break;
        case 3:
            printf("Green\n");
            break;
        case 4:
            printf("Yellow\n");
            break;
        case 5:
            printf("Purple\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
