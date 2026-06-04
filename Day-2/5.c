#include <stdio.h>

int main() {
    long long num, temp;
    int sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;
    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of digits of %lld = %d\n", num, sum);

    return 0;
}