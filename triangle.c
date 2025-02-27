//calculate the area of triangle
#include <stdio.h>
int main()
{
    int b, h, a;
    printf("enter base and height of triangle: ");
    scanf("%d %d", &b, &h);

    a = 0.5 * b * h;

    printf("area: %d", a);
    return 0;
}
