#include <stdio.h>
/* Function prototype */
int gcd(int a, int b);

/* Function definition */
int gcd(int a, int b) {
    int i, gcdValue = 1;

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcdValue = i;
        }
    }

    return gcdValue;
}

int main(void) {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    /* Function call */
    result = gcd(num1, num2);

    printf("GCD = %d", result);

    return 0;
}