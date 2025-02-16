//C Program to Determine the Unicode Code Point at a Given Index 
#include <stdio.h>

void printUnicodeAtIndex(char str[], int index) {
    if (index < 0 || str[index] == '\0') {
        printf("Invalid index.\n");
        return;
    }
    printf("Unicode code point at index %d: %d (0x%X)\n", index, str[index], str[index]);
}

int main() {
    char str[100];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter index: ");
    scanf("%d", &index);

    printUnicodeAtIndex(str, index);

    return 0;
}
