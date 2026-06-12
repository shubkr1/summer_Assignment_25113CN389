#include <stdio.h>

// Function declaration (prototype)
// Returns 1 if perfect, 0 if not perfect
int isPerfect(int n);

int main() {
    int num, result;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Call the function and store the result
    result = isPerfect(num);

    // Print the final verdict based on the return value
    if (result == 1) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

// Function definition
int isPerfect(int n) {
    // Perfect numbers must be greater than 0
    if (n <= 0) {
        return 0;
    }

    int sum = 0;

    // Find all proper divisors from 1 up to n/2
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i; // If i is a divisor, add it to sum
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == n) {
        return 1; // It is a perfect number
    } else {
        return 0; // It is not a perfect number
    }
}