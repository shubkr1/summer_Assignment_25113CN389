#include <stdio.h>

int main() {
    int arr[100];
    int size, targetSum;
    int found = 0; // Flag tracker to check if at least one pair is found

    // Ask user for the size of the array
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &size);

    // Guard check for invalid size inputs
    if (size < 2 || size > 100) {
        printf("Invalid size! Please enter a size between 2 and 100.\n");
        return 1; 
    }

    // Take array inputs from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element at index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Ask user for the target sum
    printf("\nEnter the target sum you want to find: ");
    scanf("%d", &targetSum);

    printf("\nPairs with sum %d are:\n", targetSum);

    // 1. Nested loops to evaluate pairs
    for (int i = 0; i < size; i++) {
        // The inner loop starts at 'i + 1' to avoid checking an element with itself
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: (%d, %d) at indices [%d] and [%d]\n", arr[i], arr[j], i, j);
                found = 1; // Flip flag to true
            }
        }
    }

    // 2. Fallback check if no pairs matched
    if (!found) {
        printf("No pair found in the array that adds up to %d.\n", targetSum);
    }

    return 0;
}