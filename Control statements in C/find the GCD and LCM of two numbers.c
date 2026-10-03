#include <stdio.h>
int main(void)
{
    int a, b, i, gcd = 1, lcm;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    // Check numbers from 1 up to the smaller input
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // Save the common divisor
        }
    }
    // LCM is the product of the numbers divided by their GCD
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}// for a = 12 and b = 18:
    // Common divisors are 1, 2, 3, and 6, so gcd = 6
    // lcm = (12 * 18) / 6 = 36
