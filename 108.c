//C Program For String to Long Conversion
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main() {
    char str[50];
    char *endptr;
    long value;

    printf("Enter a number: ");
    fgets(str, sizeof(str), stdin);

    errno = 0;
    value = strtol(str, &endptr, 10);

    if (errno == ERANGE) {
        printf("Error: Number out of range.\n");
    } else if (endptr == str) {
        printf("Error: No valid digits found.\n");
    } else {
        printf("Converted long value: %ld\n", value);
    }

    return 0;
}
