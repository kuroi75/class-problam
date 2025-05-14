#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);

        // If at least two friends are sure about the problem, count it
        if (petya + vasya + tonya >= 2) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
