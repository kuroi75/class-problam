#include<stdio.h>

int main() {
    int i = 1, N;
    printf("Enter last number: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
