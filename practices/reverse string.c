#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("enter words: ");
    gets(str);
    
    int l = strlen(str) - 1; 
    for (int i = 0, j = l - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("reverse: %s", str);
    return 0;
}