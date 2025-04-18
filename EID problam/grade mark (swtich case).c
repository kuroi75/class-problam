#include <stdio.h>
int main() {
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);
    switch(m / 10) {
    case 10:
    case 9:
    case 8:
        printf("Result is: A+");
        break;
    case 7:
    case 6:
        printf("Result is: B+");
    case 5:
        printf("Result is: C+");
    case 4:
        printf("Result is: D+");
    default:
        printf("Result is: F");
    }
    return 0;
}
