//C Program to Copy All the Elements of One Array to Another Array
#include <stdio.h>

void copyArray(int arr1[], int arr2[], int n) {
    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    
    printf("Enter %d elements for the first array: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    copyArray(arr1, arr2, n);

    printf("Elements of the second array (copied from the first array): \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
