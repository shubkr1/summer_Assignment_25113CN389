#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0; // Index pointer for arr1
    int j = 0; // Index pointer for arr2
    int k = 0; // Index pointer for the merged array

    // Traverse both arrays and copy the smaller element into merged[]
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If there are remaining elements in arr1, copy them
    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // If there are remaining elements in arr2, copy them
    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // The merged array size must be the sum of both array sizes
    int mergedSize = size1 + size2;
    int merged[mergedSize];

    printf("Array 1: ");
    printArray(arr1, size1);

    printf("Array 2: ");
    printArray(arr2, size2);

    // Merge the arrays
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    printf("\nMerged Sorted Array: ");
    printArray(merged, mergedSize);

    return 0;
}