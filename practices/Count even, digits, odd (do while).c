#include <stdio.h>
int main(){
    int num, total= 0, even = 0, odd = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    do{
        int d = num % 10;
        total++;
        if(d % 2==0)
            even++;
        else
            odd++;
        num /=10;
    }
    while(num>0);
    printf("Total: %d\nEven: %d\nOdd: %d\n",total, even,odd);
    return 0;
}
