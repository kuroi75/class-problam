#include<stdio.h>
int main()
{
    int i,sum;
    for(i=1; i<=100; i++)
    {
        sum +=i;
        printf("%d \t", i);
    }
    printf("\n the sum of number 1 - 100 is:", sum);
}