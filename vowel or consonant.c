//check if a character is a vowel or consonant
#include<stdio.h>
int main()
{
    char c;
    printf("enter a character: ");
    scanf("%c",&c);

    switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel", c);
    break;
    }
    default:                                     //error asche
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is a consonant", c);
    }
    return 0;
}
