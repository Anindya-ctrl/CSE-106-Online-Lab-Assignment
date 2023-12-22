#include <stdio.h>

unsigned long long get_factorial(int num) {
    if(num == 0 || num == 1) return 1;

    unsigned long long factorial = 1;
    for(int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);

    if(num < 0)
        printf("Invalid input");
    else
        printf("Factorial of given number = %llu\n", get_factorial(num));
    
    return 0;
}
