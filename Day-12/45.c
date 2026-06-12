#include <stdio.h>

// Function declaration (prototype)
// Returns 1 if palindrome, 0 if not palindrome
int isPalindrome(int n);

int main() {
    int num, result;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function and store the result
    result = isPalindrome(num);

    // Print the final verdict based on the return value
    if (result == 1) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}

// Function definition
int isPalindrome(int n) {
    int originalNum = n;
    int reversedNum = 0;
    int remainder;

    // Loop to reverse the digits of the number
    while (n > 0) {
        remainder = n % 10;                  // Extract the last digit
        reversedNum = (reversedNum * 10) + remainder; // Append it to the reversed number
        n = n / 10;                          // Remove the last digit from n
    }

    // Check if the original number and reversed number are identical
    if (originalNum == reversedNum) {
        return 1; // It is a palindrome
    } else {
        return 0; // It is not a palindrome
    }
}