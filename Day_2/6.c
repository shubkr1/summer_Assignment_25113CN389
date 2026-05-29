#include <stdio.h>

int main() {
    long long num, temp;
    long long reversed = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    printf("Reversed number = %lld\n", reversed);

    return 0;
}