#include <stdio.h>

// Helper function to reverse a specific segment of the array
void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[100];
    int size, d;

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

    // Ask for the number of positions to rotate right
    printf("\nEnter the number of positions to rotate right: ");
    scanf("%d", &d);

    // Handle cases where rotation count 'd' is greater than the array size
    d = d % size;

    // Execute the Reversal Algorithm for Right Rotation
    if (d > 0) {
        reverse(arr, size - d, size - 1); // Step 1: Reverse the last 'd' elements
        reverse(arr, 0, size - d - 1);    // Step 2: Reverse the remaining elements
        reverse(arr, 0, size - 1);        // Step 3: Reverse the entire array
    }

    // Display the rotated array
    printf("\nThe array after right rotation is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}