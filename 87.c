//C Program to Compute the Sum of Diagonals of a Matrix 

#include <stdio.h>

#define SIZE 3  

int sumOfDiagonals(int matrix[SIZE][SIZE]) {
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        sum += matrix[i][i]; // Primary diagonal
        if (i != SIZE - i - 1) {
            sum += matrix[i][SIZE - i - 1]; // Secondary diagonal
        }
    }

    return sum;
}

void displayMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matrix:\n");
    displayMatrix(matrix);

    int sum = sumOfDiagonals(matrix);

    printf("\nSum of both diagonals: %d\n", sum);

    return 0;
}