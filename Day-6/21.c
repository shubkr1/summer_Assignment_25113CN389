#include <stdio.h>

int main() {
    int decimal, i = 0;
    int binary[32]; // Array to store binary digits (handles up to 32-bit integers)

    // Prompt user for input
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Edge case for 0
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Step 1: Store remainders in the array
    while (decimal > 0) {
        binary[i] = decimal % 2; // Get the remainder (0 or 1)
        decimal = decimal / 2;   // Divide the number by 2
        i++;                     // Move to the next array index
    }

    // Step 2: Print the array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}