//C Program to Find the Normal and Trace 
#include <stdio.h>
#include <math.h>

int findTrace(int matrix[10][10], int n) {
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

double findNorm(int matrix[10][10], int m, int n) {
    double sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j] * matrix[i][j];
        }
    }
    return sqrt(sum);
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[10][10];

    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (m == n) {
        int trace = findTrace(matrix, m);
        printf("Trace of the matrix: %d\n", trace);
    } else {
        printf("Trace can only be calculated for a square matrix.\n");
    }

    double norm = findNorm(matrix, m, n);
    printf("Norm (Frobenius) of the matrix: %.2f\n", norm);

    return 0;
}
