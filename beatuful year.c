#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    while (1) {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            printf("%d\n", y);
            break;
        }
    }
    return 0;
}
