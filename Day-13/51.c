#include <stdio.h>

int main() {
    int arr[100];
    int size, largest, smallest;

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

    // 1. Initialize largest and smallest with the first element
    largest = arr[0];
    smallest = arr[0];

    // 2. Loop through the array to compare elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if current element is bigger
        }
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if current element is smaller
        }
    }

    // Print the results
    printf("\nLargest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}