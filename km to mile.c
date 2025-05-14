// convert kilometers to miles
#include<stdio.h>
int main()
{
    float km,m;
    int a;

    printf("what you wanna convert to? \n 1: Km to Mile \n 2: mile to Km \n (1/2):");
    scanf("%d",&a);

    if(a==1)
    {
        printf("enther km: ");
        scanf("%f", &km);
        printf("%.2f km = %.2f mile \n",km, km*0.62);
    }
    else if(a==2)
    {
        printf("enther mile: ");
        scanf("%f", &m);
        printf("%.2f mile = %.2f km \n",m, m*1.61);
    }
    else
    {
        printf("plase enter 1 or 2");
    }
    return 0;
}
