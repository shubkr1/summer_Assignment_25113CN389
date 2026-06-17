#include <stdio.h>
#include <stdbool.h>

// Helper function to check if an element already exists in the array
bool isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr1[] = {4, 1, 6, 2};
    int arr2[] = {5, 2, 1, 9, 7};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // Maximum possible size of union array is n1 + n2
    int unionArr[n1 + n2];
    int k = 0; // Tracks size of unionArr

    // 1. Copy all elements of first array (assuming arr1 itself has no duplicates)
    for (int i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    // 2. Only add elements from arr2 if they aren't already in unionArr
    for (int j = 0; j < n2; j++) {
        if (!isPresent(unionArr, k, arr2[j])) {
            unionArr[k++] = arr2[j];
        }
    }

    // Print the Union array
    printf("Union of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}