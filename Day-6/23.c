#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        // n & 1 returns 1 if the last bit is 1, and 0 if it's 0
        count += (n & 1); 
        // Right shift the number by 1 bit to check the next digit
        n = n >> 1;       
    }
    return count;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Number of set bits in %d is: %d\n", num, countSetBits(num));
    return 0;
}