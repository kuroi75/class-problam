//check even number or odd
#include<stdio.h>
int main()
{
    int numb;
    printf("enter a number to check: ");
    scanf("%d", &numb);

    if(numb % 2 == 0)
    {
        printf("%d is even number", numb);
    }
    else
    {
        printf("%d is odd number", numb);
    }
    getchar();
    getchar();
}
