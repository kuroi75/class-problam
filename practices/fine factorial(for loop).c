#include <stdio.h>

int main() {
    int n, i;
    long x = 1;

    printf("enter positive numbers: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("error");
    } else {
        for (i = 1; i <= n; ++i) {
            x *= i;
        }
        printf("factorial: %d = %lu", n, x);
    }
    return 0;
}