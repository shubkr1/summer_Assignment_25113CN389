#include <stdio.h>

int main() {
    int arr[100];
    int size;
    int evenCount = 0; // Accumulator for even numbers
    int oddCount = 0;  // Accumulator for odd numbers

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
    }

    // Loop to check each element and count even/odd values
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even counter if divisible by 2
        } else {
            oddCount++;  // Increment odd counter otherwise
        }
    }

    // Print the final counts
    printf("\nTotal even elements = %d\n", evenCount);
    printf("Total odd elements = %d\n", oddCount);

    return 0;
}