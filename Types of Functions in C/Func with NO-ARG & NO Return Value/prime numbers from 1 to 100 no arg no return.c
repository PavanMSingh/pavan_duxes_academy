#include <stdio.h>
void printPrimes(void);   /* Function prototype */

void printPrimes(void)   /* Function definition */
{
    int number, i, count;

    for (number = 2; number <= 100; number++) {
        count = 0;

        /* Check whether number is divisible by any number before it */
        for (i = 1; i <= number; i++) {
            if (number % i == 0) {
                count++;
            }
        }
        
        /* A prime number has exactly two factors: 1 and itself */
        if (count == 2) {
            printf("%d ", number);
        }
    }
}                        //  NO-ARG & NO-RETURN

int main(void) {
                   
    printPrimes();   /* Function call */

    return 0;
}