//C Program to Get a Non-Repeating Character From the Given String
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256  

char getFirstNonRepeatingChar(const char *str) {
    int count[MAX_CHAR] = {0};  
    
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];  
        }
    }
    
    return '\0';  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    char result = getFirstNonRepeatingChar(str);

    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No unique character found.\n");
    }

    return 0;
}
