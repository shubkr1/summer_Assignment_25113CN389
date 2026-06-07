#include <stdio.h>

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    // Base case: if number becomes 0, stop recursion
    if (n == 0) {
        return 0;
    }
    
    // Recursive case: last digit + sum of the remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Convert negative numbers to positive to handle them correctly
    int temp = (num < 0) ? -num : num;

    result = sumOfDigits(temp);

    printf("The sum of digits of %d is: %d\n", num, result);

    return 0;
}