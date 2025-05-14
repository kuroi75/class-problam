#include <stdio.h>
int main() {
    char n, rev = 0, ans;
    
    printf("check palindrome: ");
    scanf("%s", &n);
    ans = n;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf(ans == rev ?"yes":"not");
    return 0;
}