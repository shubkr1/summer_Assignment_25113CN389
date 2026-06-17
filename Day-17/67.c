#include <stdio.h>
#include <stdbool.h>

// Helper function to check if an element exists in a given array
bool isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr1[] = {4, 9, 2, 4, 1};
    int arr2[] = {2, 4, 4, 7, 9, 5};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // The intersection array can at most be the size of the smaller array
    int intersectArr[n1 < n2 ? n1 : n2];
    int k = 0; // Tracks size of intersectArr

    for (int i = 0; i < n1; i++) {
        // 1. Check if the element is in the second array
        // 2. Make sure it isn't already added to our results (prevents duplicates)
        if (isPresent(arr2, n2, arr1[i]) && !isPresent(intersectArr, k, arr1[i])) {
            intersectArr[k++] = arr1[i];
        }
    }

    // Print the Intersection array
    printf("Intersection of arrays: ");
    if (k == 0) {
        printf("No common elements");
    } else {
        for (int i = 0; i < k; i++) {
            printf("%d ", intersectArr[i]);
        }
    }
    printf("\n");

    return 0;
}