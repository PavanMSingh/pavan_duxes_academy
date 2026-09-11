#include <stdio.h> // with Argu & No return value
/* Function prototype */
void printReverse(int number);

/* Function definition */
void printReverse(int number) {
    int reverse = 0, digit;

    while (number != 0) {
        digit = number % 10;          // Get last digit
        reverse = reverse * 10 + digit;
        number = number / 10;         // Remove last digit
    }                                 
                                     //% 10 gets the last digit; / 10 removes it.
                                      //Each extracted digit is added to reverse.
    printf("Reverse = %d", reverse);
}

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    /* Function call */
    printReverse(number);

    return 0;
}