//C Program to Sort the 2D Array Across Rows

#include <stdio.h>

void sortRow(int row[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(row[j] > row[j+1]) {
                temp = row[j];
                row[j] = row[j+1];
                row[j+1] = temp;
            }
        }
    }
}

void sort2DArray(int arr[][10], int m, int n) {
    for(int i = 0; i < m; i++) {
        sortRow(arr[i], n);
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    int arr[m][n];
    printf("Enter the elements of the 2D array: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    sort2DArray(arr, m, n);

    printf("2D array after sorting each row: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
