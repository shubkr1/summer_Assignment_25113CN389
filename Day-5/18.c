#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for final comparison

    // Process each digit of the number
    while (num > 0) {
        rem = num % 10; // Extract the last digit

        // Calculate the factorial of the digit
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;   // Add the factorial to the sum
        num = num / 10; // Remove the last digit from the number
    }

    // Check if the sum of factorials matches the original number
    if (sum == originalNum && originalNum > 0) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}