//C Program For Double to String Conversion
#include <stdio.h>

void doubleToString(double num, char *str, int precision) {
    sprintf(str, "%.*f", precision, num);
}

int main() {
    double num = 123.456789;
    char str[50];
    int precision = 4;
    
    doubleToString(num, str, precision);
    printf("String representation: %s\n", str);
    
    return 0;
}
