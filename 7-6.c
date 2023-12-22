#include <stdio.h>

int main() {
    int num, target, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the target digit: ");
    scanf("%d", &target);

    while(num != 0) {
        int current_digit = num % 10;
        if(current_digit == target)
            count++;

        num /= 10;
    }

    printf("The digit %d occurs %d times in the number\n", target, count);
    return 0;
}
