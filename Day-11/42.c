#include <stdio.h>

// Function declaration (prototype)
int findMaximum(int num1, int num2);

int main() {
    int a, b, maxResult;

    // Ask the user for input
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Call the function and store the returned value
    maxResult = findMaximum(a, b);

    // Print the result
    printf("The maximum number between %d and %d is: %d\n", a, b, maxResult);

    return 0;
}

// Function definition
int findMaximum(int num1, int num2) {
    // Check which number is larger using a conditional statement
    if (num1 > num2) {
        return num1; // Return num1 if it's greater
    } else {
        return num2; // Return num2 if it's greater or if they are equal
    }
}