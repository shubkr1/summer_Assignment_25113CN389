#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int main() {
    int arr[100];
    int size;
    int largest, secondLargest;

    // Ask the user for the size of the array
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &size);

    // Guard check for invalid size inputs
    if (size < 2 || size > 100) {
        printf("Invalid size! Please enter a size between 2 and 100.\n");
        return 1; 
    }

    // Loop to take inputs from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element at index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // 1. Initialize tracking variables
    largest = INT_MIN;
    secondLargest = INT_MIN;

    // 2. Single pass loop to find largest and second largest
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            // The old largest now becomes the second largest
            secondLargest = largest;
            // Update largest with the new maximum value
            largest = arr[i];
        } 
        // If the element is smaller than largest but strictly greater than secondLargest
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // 3. Display the result after validating a second largest exists
    if (secondLargest == INT_MIN) {
        printf("\nThere is no unique second largest element (all elements might be equal).\n");
    } else {
        printf("\nLargest element = %d\n", largest);
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}