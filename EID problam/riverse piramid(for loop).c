#include <stdio.h>

int main() {
    int i, j,h;
    printf("Enter hight for the Piramid: ");
    scanf("%d" , &h);

    for(i = 0; i < h; i++) {
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        for(j = 0; j < (2 * (h - i) - 1); j++) {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}
