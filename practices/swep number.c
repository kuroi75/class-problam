#include <stdio.h>
int main() {
    int a, b, temp;

    printf("enter 1st number: ");
    scanf("%d", &a);
    printf("\nenter 2nd number: ");
    scanf("%d", &b);

    //take a temp for sweping
    temp = a;  
    a = b;
    b = temp;
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}