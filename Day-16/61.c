#include <stdio.h>

int main() {
    int arr[100];
    int n, arraySum = 0;
    int expectedSum, missingNumber;

    // Ask the user for the value of N (the total range size)
    printf("Enter the total range size N (1 to N): ");
    scanf("%d", &n);

    // Guard check for invalid size inputs
    if (n <= 1 || n > 100) {
        printf("Invalid size! Please enter an N value between 2 and 100.\n");
        return 1; 
    }

    // Since 1 number is missing, the array will actually contain (N - 1) elements
    int totalElements = n - 1;

    printf("Enter %d elements (values between 1 and %d):\n", totalElements, n);
    for (int i = 0; i < totalElements; i++) {
        printf("Element at index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // 1. Calculate the sum of elements actually present in the array
    for (int i = 0; i < totalElements; i++) {
        arraySum = arraySum + arr[i];
    }

    // 2. Calculate the expected sum of numbers from 1 to N using the formula
    expectedSum = (n * (n + 1)) / 2;

    // 3. The missing number is the difference between the two sums
    missingNumber = expectedSum - arraySum;

    // Display the result
    printf("\nThe missing number from the sequence is: %d\n", missingNumber);

    return 0;
}