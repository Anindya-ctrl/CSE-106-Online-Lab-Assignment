#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of desired rows: ");
    scanf("%d", &rows);

    int count = 1;
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= 3; ++j) {
            printf("%d ", count++);
        }
        printf("\n");
    }

    return 0;
}
