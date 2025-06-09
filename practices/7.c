#include <stdio.h>
#include <string.h>

void abbreviateWord(char word[]) {
    int length = strlen(word);
    if (length > 10) {
        printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
    } else {
        printf("%s\n", word);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char word[101];
    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", word);
        abbreviateWord(word);
    }

    return 0;
}
