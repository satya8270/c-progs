//C Program to Find the Determinant of a Matrix
#include <stdio.h>

int determinant(int matrix[10][10], int n) {
    int det = 0;

    if (n == 1) {
        return matrix[0][0];
    }

    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }

    int temp[10][10];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        int i = 0;
        for (int row = 1; row < n; row++) {
            int j = 0;
            for (int col = 0; col < n; col++) {
                if (col != f) {
                    temp[i][j++] = matrix[row][col];
                }
            }
            i++;
        }
        det += sign * matrix[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return det;
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter elements of the matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, n);
    printf("Determinant of the matrix is: %d\n", det);

    return 0;
}
