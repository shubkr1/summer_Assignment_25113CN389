#include <stdio.h>

int main() {
    int arr[100];
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
    }

    // 1. Two-Pointer In-Place Reversal Logic
    int start = 0;          // Pointer starting at the first element
    int end = size - 1;     // Pointer starting at the last element
    int temp;               // Temporary variable to hold values during swapping

    while (start < end) {
        // Swap elements at 'start' and 'end'
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers toward the center
        start++;
        end--;
    }

    // 2. Loop to display the reversed array
    printf("\nThe reversed array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}