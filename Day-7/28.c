#include <stdio.h>

// Recursive function helper that carries the accumulated reversed number
int reverseHelper(int n, int reversed) {
    // Base case: when there are no digits left
    if (n == 0) {
        return reversed;
    }
    
    // Shift the accumulated result left by 10 and add the last digit of n
    reversed = (reversed * 10) + (n % 10);
    
    // Recursive call with the remaining digits of n
    return reverseHelper(n / 10, reversed);
}

// Main wrapper function for user friendliness
int reverseNumber(int n) {
    // Handle the edge case of 0 explicitly
    if (n == 0) {
        return 0;
    }
    return reverseHelper(n, 0);
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Track if the number was originally negative
    int isNegative = (num < 0);
    int temp = isNegative ? -num : num;

    result = reverseNumber(temp);
    
    // Reapply the negative sign if necessary
    if (isNegative) {
        result = -result;
    }

    printf("Reversed number: %d\n", result);

    return 0;
}