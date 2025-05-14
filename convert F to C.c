#include <stdio.h>

int main() {
    float farenhight, celsius;

    printf("Enter a farenhight: ");
    scanf("%f", &farenhight); 

    celsius = (farenhight -32)*5/9;
    printf("%f", celsius);

}
