//C Program to Append the Content of One Text File to Another

#include <stdio.h>

int main() {
    char source[100], destination[100];
    FILE *src, *dest;
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    if (!src) {
        printf("Error opening source file.\n");
        return 1;
    }

    dest = fopen(destination, "a");
    if (!dest) {
        printf("Error opening destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("Content appended successfully.\n");

    fclose(src);
    fclose(dest);
    return 0;
}
