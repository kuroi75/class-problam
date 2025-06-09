//Calculate area of a rectangle
#include <stdio.h>

int main() {
    float x, y, area;
    printf("enter length and wide of the rectangle: ");
    scanf("%f %f", &x, &y);

    area = x * y;
    printf("Area of the rectangle = %.2f\n", area);

    return 0;
}
