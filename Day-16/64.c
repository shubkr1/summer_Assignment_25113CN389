#include <stdio.h>

int main() {
    int arr[100];
    int size;

    // Ask user for the size of the array
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &size);

    // Guard check for invalid size inputs
    if (size <= 0 || size > 100) {
        printf("Invalid size! Please enter a size between 1 and 100.\n");
        return 1; 
    }

    // Take array inputs from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element at index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // 1. Logic to remove duplicates in-place
    int uniqueSize = 0; // Tracks the boundary of the unique sub-array

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if the current element arr[i] already exists in the unique part
        for (int j = 0; j < uniqueSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1; // Match found, it's a duplicate
                break;
            }
        }

        // If it's not a duplicate, retain it at the uniqueSize position
        if (isDuplicate == 0) {
            arr[uniqueSize] = arr[i];
            uniqueSize++; // Grow the unique sub-array size
        }
    }

    // 2. Display the modified array up to the new uniqueSize boundary
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < uniqueSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTotal unique elements left: %d\n", uniqueSize);

    return 0;
}