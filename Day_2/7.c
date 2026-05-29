#include <stdio.h>

int main() {
    long long num, temp;
    int product = 1;
    int remainder;
    int has_digits = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;
    if (temp < 0) {
        temp = -temp;
    }

    if (temp == 0) {
        product = 0;
    } else {
        while (temp != 0) {
            remainder = temp % 10;
            product *= remainder;
            temp /= 10;
        }
    }

    printf("Product of digits of %lld = %d\n", num, product);

    return 0;
}