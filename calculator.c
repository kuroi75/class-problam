//simple calculator using if, if else
#include <stdio.h>
int main() {
    float A, B;
    char op;

    printf("Enter 2 numbers: ");
    scanf("%f %f", &A, &B);

    printf("What do you want to do (+, -, *, /): ");
    scanf(" %c", &op);
    if (op == '+') {
        printf("The number is: %f\n", A + B);
    } else if (op == '-') {
        printf("The number is: %f\n", A - B);
    } else if (op == '*') {
        printf("The number is: %f\n", A * B);
    } else if (op == '/') {
        printf("The number is: %f\n", A / B);
    }

    return 0;
}

