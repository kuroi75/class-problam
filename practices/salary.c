/* Calculate the total salary of an employee
    House Rent allowance 40% of basic salary
    medical 1500, tiffen 200 */

#include<stdio.h>
int main()
{
    int B,h,m,t,total;
    printf("enter your basic salary: ");
    scanf("%d",&B);
    h =(B*40)/100;
    m =1500+B;
    t =200+B;
    total = B+h+m+t;

    printf("Total is: %02d", total);

    return 0;
}
