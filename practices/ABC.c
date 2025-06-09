//print alphabets (Aa-Zz)
#include<stdio.h>
int main()
{
    char XD, xd;
    printf("A to Z alphabetes are: \n");
    for (XD ='A'; XD<='Z'; XD++)
    {
        printf("%c\t", XD);
    }

    printf("\n \n");
    for (xd ='a'; xd<='z'; xd++)
    {
        printf("%c \t", xd);
    }
    return 0;
}
