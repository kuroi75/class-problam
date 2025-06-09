#include <stdio.h>
int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int isStrong(int num) {
    int original = num, sum = 0, digit;
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == original);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf(isStrong(num) ? "Strong number\n" : "Not a Strong number\n");
    return 0;
}