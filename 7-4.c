#include <stdio.h>

int main() {
    int m, n, d;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter d: ");
    scanf("%d", &d);

    printf("Following are the integers from range %d to %d that are divisible by %d\n", m, n, d);
    for(int i = m; i <= n; ++i) {
        if(i % d == 0)
            printf("%d\n", i);
    }

    return 0;
}
