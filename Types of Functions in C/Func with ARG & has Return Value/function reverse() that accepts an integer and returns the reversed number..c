#include <stdio.h> //with arg & return value
/* Function prototype */
int reverse(int number);

/* Function definition */
int reverse(int number) {
    int reversed = 0, digit;

    while (number != 0) {
        digit = number % 10;              // Take last digit
        reversed = reversed * 10 + digit; // Add it to reversed number
        number = number / 10;             // Remove last digit
    }
    return reversed;
}

int main(void) {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    /* Function call */
    result = reverse(number);

    printf("Reversed number = %d", result);

    return 0;   /*% 10 gets the last digit, / 10 removes it, and reversed * 10 + digit builds 
                          the reversed number one digit at a time.*/
}