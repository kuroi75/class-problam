#include <stdio.h>
int main() {
    char x[100];
    int i;
    printf("word: ");
    gets(x); 

    for (i = 0; x[i] != '\0'; i++)
    {
        if(x[i]>= 'A'&& x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
    }

    printf("%s", x);
    return 0;
}