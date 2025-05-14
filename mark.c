#include<stdio.h>

int main()
{
    int a;
    printf("enter your mark: ");
    scanf("%d", &a);

    if(a<=20&&29)
    {
        printf("You are failler");
    }
    else if(a<=40&&59)
    {
        printf("your result : C");
    }
    else if(a<=60&&69)
    {
        printf("your result : B");
    }
    else
    {
        printf("your result : A");
    }
}
