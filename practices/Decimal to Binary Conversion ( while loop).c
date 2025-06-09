#include<stdio.h>
int main()
{
    int num, bin = 0,rem =0, place = 1;
    printf("enter decimal number: ");
    scanf("%d", &num);

    int save = num;

    while(num)
    {
        rem = num % 2;
        bin = bin + (rem * place);
        place = place * 10;
        num = num / 2;
    }
    printf("%d in bainary is: %d", save, bin);
    return 0;
}
