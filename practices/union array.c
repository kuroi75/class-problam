#include <stdio.h>

int main() {
    int a[100], b[100], unionArr[200];
    int n, m, i, j, k = 0;

    printf("enter size of 1st array: ");
    scanf("%d", &n);
    printf("enter %d array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        unionArr[k++] = a[i];
    }

    printf("enter size of 2nd array: ");
    scanf("%d", &m);
    printf("enter %d array: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < m; i++) {
        int x = 0;
        for (j = 0; j < n; j++) {
            if (b[i] == a[j])
            {
                x = 1;
                break;
            }
        }
        if (!x) 
        {
            unionArr[k++] = b[i];
        }
    }

    printf("Union: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}