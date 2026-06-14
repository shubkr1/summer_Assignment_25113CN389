#include <stdio.h>

int main() {
    int arr[100];
    int visited[100]; // Array to track counted elements
    int size;

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

    // 1. Nested loops to count frequencies
    for (int i = 0; i < size; i++) {
        // Skip this element if it has already been processed
        if (visited[i] == 1) {
            continue;
        }

        int count = 1; // Start counting the current element
        
        // Check the rest of the array for duplicates
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate element as visited
            }
        }
        
        // Print the frequency of the current unique element
        printf("Element %d occurs %d time(s)\n", arr[i], count);
    }

    return 0;
}