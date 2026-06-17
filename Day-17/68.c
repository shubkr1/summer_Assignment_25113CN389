#include <stdio.h>
#include <stdbool.h>

// Helper function to check if a number exists inside an array
bool isElementInArray(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr1[] = {5, 2, 9, 2, 6, 1};
    int arr2[] = {2, 7, 1, 2, 5, 8};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // The list of common elements can't be larger than the smallest array
    int common[n1 < n2 ? n1 : n2];
    int count = 0; // Tracks the number of common elements found

    for (int i = 0; i < n1; i++) {
        // 1. Check if the element is in the second array
        // 2. Ensure it hasn't already been added to our common list
        if (isElementInArray(arr2, n2, arr1[i]) && !isElementInArray(common, count, arr1[i])) {
            common[count++] = arr1[i];
        }
    }

    // Print results
    printf("Common elements: ");
    if (count == 0) {
        printf("None");
    } else {
        for (int i = 0; i < count; i++) {
            printf("%d ", common[i]);
        }
    }
    printf("\n");

    return 0;
}