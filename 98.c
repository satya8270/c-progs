//C Program to Print the First Letter of Each Word 
#include <stdio.h>
#include <ctype.h>

void printFirstLetters(char str[]) {
    if (str[0] != ' ') 
        printf("%c ", str[0]);

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i - 1] == ' ') {
            printf("%c ", str[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    printf("First letters: ");
    printFirstLetters(str);
    
    return 0;
}
