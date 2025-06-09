#include <stdio.h>
#define PI 3.1416 

int main() 
{
    float a, r;
    printf("Enter circle radius: ");
    scanf("%f", &r);

    a = PI * r * r;
    printf("Area of the circle is: %.2f\n", a);

    return 0;
}
