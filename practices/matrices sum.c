#include <stdio.h>
int main() {
    int r, c, i, j;
    
    printf("enter row & cloume: ");
    scanf("%d %d", &r, &c);

    int mat1[r][c], mat2[r][c], sum[r][c];

    printf("Enter matrix 1:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    printf("enter matrix 2:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
            printf("\n");
    }
    return 0;
}