//C Program For Octal to Decimal Conversion
#include <stdio.h>

int main() {
    int octal, decimal = 0, base = 1, digit;

    printf("Enter an octal number: ");
    scanf("%o", &octal);

    decimal = octal;

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
