#include <stdio.h>
int main(void)
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    // Numbers less than 2 are not prime
    if (number < 2) {
        printf("Not prime\n");
        return 0;
    }
    // Check if any number from 2 to number - 1 divides it evenly
    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }

    // No divisor was found
    printf("Prime\n");

    return 0;
}
// 7 is not divisible evenly by 2, 3, 4, 5, or 6, so it is prime.