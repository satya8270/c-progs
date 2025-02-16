//C Program to Insert a String into Another String
#include <stdio.h>
#include <string.h>

void insertString(char mainStr[], char insertStr[], int pos) {
    int mainLen = strlen(mainStr);
    int insertLen = strlen(insertStr);

    if (pos < 0 || pos > mainLen) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = mainLen; i >= pos; i--) {
        mainStr[i + insertLen] = mainStr[i];
    }

    for (int i = 0; i < insertLen; i++) {
        mainStr[pos + i] = insertStr[i];
    }
}

int main() {
    char mainStr[200], insertStr[100];
    int pos;

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = 0;

    printf("Enter the string to insert: ");
    fgets(insertStr, sizeof(insertStr), stdin);
    insertStr[strcspn(insertStr, "\n")] = 0;

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    insertString(mainStr, insertStr, pos);

    printf("Modified string: %s\n", mainStr);

    return 0;
}