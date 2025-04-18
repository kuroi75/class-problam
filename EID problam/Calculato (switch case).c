#include <stdio.h>
int main() {
    float a, b;
    char op;

    printf("what you wanna calculate: ");
    scanf("%f %c %f", &a,&op,&b);
    switch(op)
    {
        case '+': printf("Result: %f\n", a+b);
            break;
        case '-': printf("Result: %f\n", a-b);
            break;
        case '*': printf("Result: %f\n", a*b);
            break;
        case '/':
            if(b==0)
                printf("Ans is: Infinity");
            else
                printf("Result: %f\n", a/b);
            break;
    }

    return 0;
}
