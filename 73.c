//C Program to Merge Two Arrays 

#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    while(i < n1) {
        result[k++] = arr1[i++];
    }

    while(j < n2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for the first array: \n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for the second array: \n", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[n1 + n2];
    mergeArrays(arr1, arr2, n1, n2, result);

    printf("Merged array: \n");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
