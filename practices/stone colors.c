#include<stdio.h>
int main()
{
    int n;
    char c[50];
    scanf("%d %s", &n,&c);
    int count=0,i;
    for (i=0;i<n-1;i++)
    {
        if(c[i]==c[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
}
