#include <stdio.h>

int main() {
    long long num, original, reversed = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    original = num;

    if (num < 0) {
        printf("%lld is not a palindrome number.\n", num);
    } else {
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        if (original == reversed) {
            printf("%lld is a palindrome number.\n", original);
        } else {
            printf("%lld is not a palindrome number.\n", original);
        }
    }

    return 0;
}