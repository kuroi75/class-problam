#include<stdio.h>
int main()
{
    int n=2,m=4;
    int p=2,q=4;
    int i,j,x,y;
    int mtx_a[n][m];
    int mtx_b[p][q];
    int sum[2][4];

    //taking martix value 1
    printf("for 1st martix enter 8 numbers: ");
    for ( i = 0; i < n; i++)
    {
        for(j=0; j < m; j++)
    {
        scanf("%d", &mtx_a[i][j]);
    }
    }
    //taking martix value 1
    printf("for 2nd martix enter 8 numbers: ");
    for (x=0; x< p; x++)
    {
        for(y=0; y < q; y++)

    {
        scanf("%d", &mtx_b[x][y]);
    }
    }

    //sum
       for (i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            sum[i][j] = mtx_a[i][j] + mtx_b[i][j];
        }
    }

    // result
    printf("Sum of the matrices:\n");
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
