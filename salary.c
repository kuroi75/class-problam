/* Calculate the total salary of an employee
    House Rent allowance 40% of basic salary
    medical 1500, tiffen 200 */

#include<stdio.h>
int main()
{
    float B,h,m,t,total;
    printf("enter your basic salary: ");
    scanf("%f",&B);
    h=0.40*B;
    m=1500+B;
    t=200+B;
    total=B+h+m+t;

    printf("Total is: %f", total);

    return 0;
}
