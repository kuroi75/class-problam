//finding minimum number using switch
#include <stdio.h>

int main() {
    int a, b, c, min;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    min = (a <= b && a <= c) ? 1 : (b <= a && b <= c) ? 2 : 3;
    switch (min) {
        case 1:
            printf("%d is minimum", a);
            break;
        case 2:
            printf("%d is minimum", b);
            break;
        case 3:
            printf("%d is minimum", c);
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}


/*
same code but using if

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
*/
