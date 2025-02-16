//C Program to Print all the Patterns that Match Given Pattern From a File

#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], pattern[100], line[500];
    FILE *file;

    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Enter pattern to search: ");
    scanf("%s", pattern);

    file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern))
            printf("%s", line);
    }

    fclose(file);
    return 0;
}
