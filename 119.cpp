//How to Declare a Two-Dimensional Array of Pointers in C
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    
    int *arr[2][2] = { {&a, &b}, {&c, &d} };

    printf("Value at arr[0][1]: %d\n", *arr[0][1]);  // Prints 20
    printf("Value at arr[1][0]: %d\n", *arr[1][0]);  // Prints 30

    return 0;
}
