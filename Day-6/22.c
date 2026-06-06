#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, remainder, base = 1;

    // Prompt user for input
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary; // Keeping a copy for the output message

    // Process each digit from right to left
    while (binary > 0) {
        remainder = binary % 10;   // Extract the last digit (0 or 1)
        decimal = decimal + remainder * base; // Multiply by current power of 2
        binary = binary / 10;     // Remove the last digit
        base = base * 2;          // Move to the next power of 2 (1, 2, 4, 8...)
    }

    printf("Decimal equivalent of %lld is: %d\n", temp, decimal);

    return 0;
}