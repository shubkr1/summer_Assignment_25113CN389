#include <stdio.h>

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and store the smaller element
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Store remaining elements of first array
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Store remaining elements of second array
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // The merged array size must be the sum of both sizes
    int merged[n1 + n2]; 

    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    printf("Merged Sorted Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}