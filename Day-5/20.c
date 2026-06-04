#include <stdio.h>

int main() {
    long long num;
    long long maxPrime = -1;

    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    // Step 1: Divide out all the 2s
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // Step 2: Look for odd factors up to the square root of num
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    // Step 3: If num is still greater than 2, it must be prime itself
    if (num > 2) {
        maxPrime = num;
    }

    if (maxPrime != -1) {
        printf("The largest prime factor is: %lld\n", maxPrime);
    } else {
        printf("No prime factors found.\n");
    }

    return 0;
}