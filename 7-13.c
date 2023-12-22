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
    int lower, upper;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Following are the armstrong numbers between %d and %d:\n", lower, upper);
    for(int i = lower; i <= upper; ++i) {
        if(is_armstrong(i))
            printf("%d\n", i);
    }

    return 0;
}
