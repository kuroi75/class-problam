#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num >= 10) {
        sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    printf("Single digit is: %d", num);
    return 0;
}


