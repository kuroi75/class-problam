#include <stdio.h>
int main() {
    int c,r;

    for (c = 0; c < 7; c++) {
        for (r = 0; r < 5; r++) {
            if (c == 0 || c == 3 || r == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
