//C Program For Char to Int Conversion
#include <stdio.h>

int main() {
    char ch;
    int num;

    printf("Enter a character: ");
    scanf("%c", &ch);

    num = (int) ch;

    printf("ASCII value: %d\n", num);

    return 0;
}
