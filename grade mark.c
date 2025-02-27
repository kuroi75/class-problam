//calculate the grade based on mark

#include<stdio.h>
int main()
{
    int mark;
    printf("enter mark: ");
    scanf("%d", &mark);
    if (mark >= 80 && mark <=100)
    {
        printf("result: A");
    }
    if (mark >= 60 && mark <=79)
    {
        printf("result: B");
    }
        if (mark >= 40 && mark <=59)
    {
        printf("result: c");
    }
    if (mark >= 0 && mark <=39)
    {
        printf("result: F");
    }
    return 0;
}
