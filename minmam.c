#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("enter 3 numbers: ");
    scanf("%d %d %d", &a,&b,&c);

    min=a;
    if(min>b)
    {
        min=b;
    }
    if (c<min)
    {
        min=c;
    }
    printf("the minmum number is: %d", min);
}
