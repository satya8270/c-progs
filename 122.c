//C Program to Sort an Array using Pointers
#include <stdio.h>

void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
}

int main() {
    int arr[] = {42, 10, 35, 19, 8}, size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    return 0;
}
