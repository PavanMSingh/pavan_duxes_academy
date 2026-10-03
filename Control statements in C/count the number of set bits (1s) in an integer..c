#include <stdio.h>
int main(void)
{
    unsigned int number;
    int count = 0;

    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    // Check each binary digit
    while (number > 0) {
        count = count + (number % 2); // Add 1 if the last bit is 1
        number = number / 2;          // Remove the last binary digit
    }
    printf("Number of set bits: %d\n", count);
    return 0;
}
// for 13 (binary 1101):
    // number 13 -> last bit 1, count 1; number becomes 6
    // number  6 -> last bit 0, count 1; number becomes 3
    // number  3 -> last bit 1, count 2; number becomes 1
    // number  1 -> last bit 1, count 3; number becomes 0
    // Result: 3 set bits
    //
    // for 8 (binary 1000):
    // number 8 -> last bit 0, count 0; number becomes 4
    // number 4 -> last bit 0, count 0; number becomes 2
    // number 2 -> last bit 0, count 0; number becomes 1
    // number 1 -> last bit 1, count 1; number becomes 0
    // Result: 1 set bit