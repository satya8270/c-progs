//C Program to Remove All Occurrences of an Element in an Array#include <stdio.h>

int removeElement(int arr[], int n, int element) {
    int i, j = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] != element) {
            arr[j++] = arr[i];
        }
    }
    return j; // Return the new size of the array
}

int main() {
    int n, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to remove: ");
    scanf("%d", &element);

    n = removeElement(arr, n, element);

    printf("Array after removing all occurrences of %d: \n", element);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
