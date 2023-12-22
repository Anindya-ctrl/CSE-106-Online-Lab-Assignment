#include <stdio.h>

int main() {
    int second, minute, hour;
    printf("Enter the number of seconds: ");
    scanf("%d", &second);

    hour = second / 3600;
    second %= 3600;
    minute = second / 60;
    second %= 60;

    printf("Equivalent time: %d hours, %d minutes, %d seconds\n", hour, minute, second);
    return 0;
}
