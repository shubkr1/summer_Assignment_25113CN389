#include <stdio.h>

int main() {
    int arr[100];
    int size, sum = 0;
    float average;

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

    // 1. Loop to calculate the sum of array elements
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i]; // Add each element to the running total
    }

    // 2. Calculate the average
    // Typecasting 'sum' to float to prevent integer division truncation
    average = (float)sum / size;

    // Print the results
    printf("\nSum of all elements = %d\n", sum);
    printf("Average of all elements = %.2f\n", average);

    return 0;
}