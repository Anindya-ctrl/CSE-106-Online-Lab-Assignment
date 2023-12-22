#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of desired rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; ++i) {
        for(int space = i; space < rows; ++space) {
            printf("  ");
        }
        for(int j = i; j >= 1; --j) {
            printf("%d ", j);
        }
        for(int j = 2; j <= i; ++j) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    return 0;
}
