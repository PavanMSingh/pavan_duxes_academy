#include <stdio.h> // no arg & has return value

/* Function prototype */
int factorial(void);

/* Function definition */
int factorial(void) {
    int number, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        fact = fact * i;
    }

    return fact;
}

int main(void) {
    int result;

    /* Function call */
    result = factorial();
    printf("Factorial = %d", result);
    return 0;
} //factorial() takes no argument. It reads 5, 
//calculates 1 × 2 × 3 × 4 × 5, then returns 120 to main().