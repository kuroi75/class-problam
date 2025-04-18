#include <stdio.h>

int main() {
    int i, j, h;
    printf("Enter height for the Pyramid: ");
    scanf("%d", &h);

    for (i = 0; i < h; i++) {
        for (j = 0; j < h - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < (2 * i + 1); j++) {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}


