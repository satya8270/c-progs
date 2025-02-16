//C Program to Make a File Read-Only

#include <stdio.h>

int main() {
    char filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    if (chmod(filename, 0444) == 0)
        printf("File is now read-only.\n");
    else
        printf("Error changing file permissions.\n");

    return 0;
}

