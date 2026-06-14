#include <stdio.h>

int main() {
    int arr[100];
    int visited[100]; // Array to flag processed elements
    int size;
    int hasDuplicates = 0; // Flag to check if any duplicate exists at all

    // Ask the user for the size of the array
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &size);

    // Guard check for invalid size inputs
    if (size <= 0 || size > 100) {
        printf("Invalid size! Please enter a size between 1 and 100.\n");
        return 1; 
    }

    // Loop to take inputs from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element at index [%d]: ", i);
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize tracking status as 0 (not visited)
    }

    printf("\nDuplicate elements found in the array:\n");

    // 1. Nested loops to detect duplicates
    for (int i = 0; i < size; i++) {
        // Skip if this element has already been marked as a duplicate before
        if (visited[i] == 1) {
            continue;
        }

        int count = 1; // Count occurrences of arr[i]

        // Check the rest of the array for matches
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark the forward duplicate position as visited
            }
        }

        // 2. If count is greater than 1, it's a duplicate
        if (count > 1) {
            printf("Element %d appears %d times.\n", arr[i], count);
            hasDuplicates = 1; // Set flag to true
        }
    }

    // If no duplicates were found after scanning the entire array
    if (!hasDuplicates) {
        printf("No duplicate elements found in the array.\n");
    }

    return 0;
}