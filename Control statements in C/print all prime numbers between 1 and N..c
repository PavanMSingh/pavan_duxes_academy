#include <stdio.h>
int main(void)
{
    int n, number, i;
    int isPrime;
    printf("Enter N: ");
    scanf("%d", &n);
    // Check every number from 2 to N
    for (number = 2; number <= n; number++) {
        isPrime = 1; // Assume this number is prime

        // Check if any number from 2 to number - 1 divides it
        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0; // A divisor was found
                break;
            }
        }
        // Print the number if it is prime
        if (isPrime == 1) {
            printf("%d ", number);
        }
    }
    return 0;
}//N is 5, the program checks 2, 3, 4, and 5. 
//It prints 2, 3, and 5; 
//4 is skipped because 4 % 2 equals 0.