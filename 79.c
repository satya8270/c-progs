//C Program to Check Whether Two Matrices Are Equal or Not#include <stdio.h>

int areMatricesEqual(int matrix1[][10], int matrix2[][10], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix1[i][j] != matrix2[i][j]) {
                return 0; // Matrices are not equal
            }
        }
    }
    return 1; // Matrices are equal
}

int main() {
    int m, n;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n];

    printf("Enter elements of the first matrix: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }

    }

    if(areMatricesEqual(matrix1, matrix2, m, n)) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}
