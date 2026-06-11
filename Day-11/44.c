#include <stdio.h>

// Function declaration (prototype)
// Using 'unsigned long long' to handle very large output values
unsigned long long findFactorial(int n);

int main() {
    int num;
    unsigned long long result;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle negative numbers edge case directly in main
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Call the function and store the returned value
        result = findFactorial(num);
        
        // Print the result
        printf("The factorial of %d is: %llu\n", num, result);
    }

    return 0;
}

// Function definition
unsigned long long findFactorial(int n) {
    unsigned long long fact = 1;

    // Loop to multiply numbers from 1 up to n
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact; // Return the final calculated factorial
}