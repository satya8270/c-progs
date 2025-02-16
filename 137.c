.//C program to Compare Two Files and Report Mismatches

#include <stdio.h>

int main() {
    char file1[100], file2[100];
    FILE *f1, *f2;
    int ch1, ch2, pos = 0, mismatch = 0;

    printf("Enter first filename: ");
    scanf("%s", file1);
    printf("Enter second filename: ");
    scanf("%s", file2);

    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");

    if (!f1 || !f2) {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        pos++;
        if (ch1 != ch2) {
            printf("Mismatch at position %d: '%c' vs '%c'\n", pos, ch1, ch2);
            mismatch = 1;
        }
    }

    if (!mismatch && (fgetc(f1) == EOF && fgetc(f2) == EOF))
        printf("Files are identical.\n");
    else
        printf("Files are different.\n");

    fclose(f1);
    fclose(f2);
    return 0;
}

