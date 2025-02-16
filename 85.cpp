//C Program to Print Boundary Elements of a Matrix

#include <stdio.h>

#define ROWS 4
#define COLS 4

void printBoundaryElements(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };

    printf("Original Matrix:\n");
    displayMatrix(matrix);

    printf("\nBoundary Elements:\n");
    printBoundaryElements(matrix);

    return 0;
}
