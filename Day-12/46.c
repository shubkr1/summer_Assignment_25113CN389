#include <stdio.h>
#include <math.h> // Required for the pow() function

// Function declaration (prototype)
// Returns 1 if Armstrong, 0 if not Armstrong
int isArmstrong(int n);

int main() {
    int num, result;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function and store the result
    result = isArmstrong(num);

    // Print the final verdict based on the return value
    if (result == 1) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

// Function definition
int isArmstrong(int n) {
    int originalNum = n;
    int temp = n;
    int digits = 0;
    int sum = 0;
    int remainder;

    // Phase 1: Count the total number of digits dynamically
    while (temp > 0) {
        temp = temp / 10;
        digits++;
    }

    // Phase 2: Extract each digit and raise it to the power of 'digits'
    temp = n; // Reset temp back to the original number
    while (temp > 0) {
        remainder = temp % 10; // Extract the last digit
        sum = sum + round(pow(remainder, digits)); // Add digit^digits to sum
        temp = temp / 10; // Remove the last digit
    }

    // Phase 3: Check if the sum matches the original number
    if (sum == originalNum) {
        return 1; // It is an Armstrong number
    } else {
        return 0; // It is not an Armstrong number
    }
}