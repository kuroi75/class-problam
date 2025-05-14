#include<stdio.h>
int main()
{
    int L,B, age=0;
    scanf("%d %d",&L,&B);
    while(1)
    {
        if(L>B)break;
        else
        {
            age++;
            L=L*3;
            B=B*2;
        }
    }
    printf("%d",age);
    return 0;
}
