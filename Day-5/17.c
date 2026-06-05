#include <stdio.h>

int main() {
    int num, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find all proper divisors and calculate their sum
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to sum
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}