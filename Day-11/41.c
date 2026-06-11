#include <stdio.h>

// Function declaration (prototype)
int findSum(int num1, int num2);

int main() {
    int a, b, total;

    // Ask the user for input
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Call the function and store the returned value
    total = findSum(a, b);

    // Print the result
    printf("The sum of %d and %d is: %d\n", a, b, total);

    return 0;
}

// Function definition (the actual body of the function)
int findSum(int num1, int num2) {
    int sum;
    sum = num1 + num2;
    return sum; // Send the result back to the caller
}