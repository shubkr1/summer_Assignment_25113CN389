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

    // 1. Single-pass loop to shift non-zero elements forward
    int insertPos = 0; // Pointer to track where the next non-zero element goes

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            // Swap the non-zero element with the element at insertPos
            int temp = arr[i];
            arr[i] = arr[insertPos];
            arr[insertPos] = temp;

            // Move the insert position tracker forward
            insertPos++;
        }
    }

    // 2. Display the modified array
    printf("\nArray after moving zeroes to the end: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}