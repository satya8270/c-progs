//C Program to Add 2 Binary Strings
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* addBinary(char *a, char *b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB ? lenA : lenB) + 1; // Extra space for carry
    char result = (char)malloc(maxLen + 1); // Allocate space for result
    result[maxLen] = '\0'; // Null terminate the string

    int carry = 0, i = lenA - 1, j = lenB - 1, k = maxLen - 1;

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0) ? a[i--] - '0' : 0;
        int bitB = (j >= 0) ? b[j--] - '0' : 0;

        int sum = bitA + bitB + carry;
        result[k--] = (sum % 2) + '0'; // Store binary digit
        carry = sum / 2; // Update carry
    }

    if (result[0] == '0') {
        memmove(result, result + 1, maxLen); 
    }

    return result;
}

int main() {
    char binary1[100], binary2[100];

    printf("Enter first binary string: ");
    scanf("%s", binary1);
    printf("Enter second binary string: ");
    scanf("%s", binary2);

    char *sum = addBinary(binary1, binary2);
    printf("Sum: %s\n", sum);

    free(sum); // Free dynamically allocated memory
    return 0;
}
