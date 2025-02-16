//C Program to Print Reverse Floyd pattern Triangle Pyramid

#include <stdio.h>

int main() {
    int i, j, rows, num;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    num = (rows * (rows + 1)) / 2;  // Calculate the highest number in the pattern

    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
