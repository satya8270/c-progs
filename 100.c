//C Program to Remove Leading Zeros
#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int i = 0;
    while (str[i] == '0') {
        i++;
    }

    if (str[i] == '\0') {
        printf("0\n"); 
        return;
    }

    printf("%s\n", str + i);
}

int main() {
    char str[100];

    printf("Enter a number with leading zeros: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Number without leading zeros: ");
    removeLeadingZeros(str);

    return 0;
}
