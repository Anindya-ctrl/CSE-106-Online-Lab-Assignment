#include <stdio.h>

int main() {
    // take number of seconds as input
    int second, minute, hour;
    printf("Enter the number of seconds: ");
    scanf("%d", &second);

    // convert given number of seconds to hour, minute and second
    hour = second / 3600;
    second %= 3600;
    minute = second / 60;
    second %= 60;

    // display result
    printf("Equivalent time: %d hours, %d minutes, %d seconds\n", hour, minute, second);
    return 0;
}
