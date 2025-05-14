#include <stdio.h>
int main() {
    int num, j = 0, i;
    printf("enter number: ");
    scanf("%d", &num);
    do {
        i =num%10;
        j = j*10+i;
        num /= 10;
    } while(num >0);
    printf("reversed number: %d",j);
    return 0;
}
