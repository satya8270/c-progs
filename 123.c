//C Program to Sort a 2D Array of Strings
#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *arr[] = {"banana", "apple", "cherry", "mango", "grape"};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortStrings(arr, n);

    printf("Sorted Strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
