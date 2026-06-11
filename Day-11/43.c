
#include <stdio.h>

// Function declaration (prototype)
// Returns 1 if prime, 0 if not prime
int isPrime(int n);

int main() {
    int num, result;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Call the function and store the result
    result = isPrime(num);

    // Print the final verdict based on the return value
    if (result == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

// Function definition
int isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) {
        return 0; 
    }

    // Check for factors from 2 up to i*i <= n (equivalent to i <= sqrt(n))
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Found a factor, so it is not prime
        }
    }

    return 1; // No factors found, so it is prime
}
