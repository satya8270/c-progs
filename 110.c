//C Program For Int to Char Conversion
#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter an integer (0-127): ");
    scanf("%d", &num);

    if (num < 0 || num > 127) {
        printf("Error: Enter a valid ASCII value (0-127).\n");
    } else {
        ch = (char) num;
        printf("Converted character: %c\n", ch);
    }

    return 0;
}

