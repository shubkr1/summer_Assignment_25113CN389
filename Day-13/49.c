#include <stdio.h>

int main() {
    int arr[100]; // Declare an array of size 100
    int size;

    // Ask the user for the number of elements
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &size);

    // Guard check for invalid size inputs
    if (size <= 0 || size > 100) {
        printf("Invalid size! Please enter a size between 1 and 100.\n");
        return 1; // Exit program with an error code
    }

    // 1. Loop to take inputs from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element at index [%d]: ", i);
        scanf("%d", &arr[i]); // Store input in the array at position i
    }

    // 2. Loop to display the stored array elements
    printf("\nThe elements in the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    printf("\n");

    return 0;
}