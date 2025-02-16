//C Program to Split a String into a Number of Sub-Strings
#include <stdio.h>
#include <string.h>

void splitString(char str[], char delimiter) {
    char *token = strtok(str, &delimiter);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, &delimiter);
    }
}

int main() {
    char str[200], delimiter;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter a delimiter character: ");
    scanf("%c", &delimiter);

    printf("Substrings:\n");
    splitString(str, delimiter);

    return 0;
}
