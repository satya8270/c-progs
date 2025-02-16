//C Program to Interchange Elements of First and Last in a Matrix Across Rows 

#include <stdio.h>

#define ROWS 3
#define COLS 3

void interchangeFirstLast(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][COLS - 1];
        matrix[i][COLS - 1] = temp;
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
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    displayMatrix(matrix);

    interchangeFirstLast(matrix);

    printf("\nMatrix After Swapping First and Last Elements of Each Row:\n");
    displayMatrix(matrix);

    return 0;
}
