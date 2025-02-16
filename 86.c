//C Program to Rotate Matrix Elements 

#include <stdio.h>

#define ROWS 4
#define COLS 4

void rotateMatrix(int matrix[ROWS][COLS]) {
    int top = 0, bottom = ROWS - 1, left = 0, right = COLS - 1;
    int prev, temp;

    while (top < bottom && left < right) {
        prev = matrix[top + 1][left];

        for (int i = left; i <= right; i++) { 
            temp = matrix[top][i];
            matrix[top][i] = prev;
            prev = temp;
        }
        top++;

        for (int i = top; i <= bottom; i++) { 
            temp = matrix[i][right];
            matrix[i][right] = prev;
            prev = temp;
        }
        right--;

        for (int i = right; i >= left; i--) { 
            temp = matrix[bottom][i];
            matrix[bottom][i] = prev;
            prev = temp;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) { 
            temp = matrix[i][left];
            matrix[i][left] = prev;
            prev = temp;
        }
        left++;
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
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Original Matrix:\n");
    displayMatrix(matrix);

    rotateMatrix(matrix);

    printf("\nRotated Matrix:\n");
    displayMatrix(matrix);

    return 0;
}
