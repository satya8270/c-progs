//C Program to Check if a String is a Palindrome using Pointers
#include <stdio.h>
#include <string.h>

int isPalindrome(char *left) {
    char *right = left + strlen(left) - 1;
    while (left < right)
        if (*left++ != *right--) return 0;
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("%s\n", isPalindrome(str) ? "Palindrome" : "Not a palindrome");
    return 0;
}
