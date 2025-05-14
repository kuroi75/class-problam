#include <stdio.h>

int main() {
    int c, w;
    long n, cost,borrow;
    scanf("%d %ld %d", &c,&n,&w);

    cost=c*w*(w+1)/2;
    borrow=cost-n;

    if(borrow <= 0)
        printf("0\n");
    else
        printf("%ld\n", borrow);

    return 0;
}
