#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int input, remainder, digits = 0;
    double res = 0.0;

    input = num;
    while(input != 0) {
        input /= 10;
        ++digits;
    }
    input = num;

    while(input != 0) {
        remainder = input % 10;
        res += pow(remainder, digits);
        input /= 10;
    }
    
    return ((int)res == num) ? 1 : 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    is_armstrong(num) ? printf("Provided number is an armstrong number\n") : printf("Provided number is not an armstrong number\n");
    return 0;
}
