#include <stdio.h>
int main() {
    int r, c;
    int mat1[3][3], mat2[3][3], sum[3][3];

    printf("only 3x3 matrix\n");
    printf("enter matrix 1:\n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%d", &mat1[r][c]);

    printf("enter matrix 2:\n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%d", &mat2[r][c]);

    // Add matrices
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            sum[r][c] = mat1[r][c] + mat2[r][c];

    printf("Sum:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++)
            printf("%d ", sum[r][c]);
        printf("\n");
    }

    return 0;
}