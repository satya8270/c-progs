//C Program For Long to String Conversion
#include <stdio.h>

int main() {
    long num;
    char str[50];

    printf("Enter a long number: ");
    scanf("%ld", &num);

    sprintf(str, "%ld", num);

    printf("Converted string: %s\n", str);

    return 0;
}
