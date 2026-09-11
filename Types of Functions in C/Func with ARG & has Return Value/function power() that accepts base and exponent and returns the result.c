#include <stdio.h>
int power(int base, int exponent);/* Function prototype */

/* Function definition */
int power(int base, int exponent) {
    int i, result = 1;

    for (i = 1; i <= exponent; i++) {  //For 2⁵, the function multiplies 2 by itself five times:
                                         //2 × 2 × 2 × 2 × 2 = 32
        result = result * base;
    }

    return result;
}

int main(void) {
    int base, exponent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent); /* Function call */

    printf("%d raised to %d = %d", base, exponent, result);

    return 0;
}