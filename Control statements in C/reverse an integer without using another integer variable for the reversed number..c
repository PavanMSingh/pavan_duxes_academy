#include <stdio.h>

int main(void)
{
    int number, digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Reversed number: ");

    // Take and print each last digit
    while (number != 0) {
        digit = number % 10;  // Get the last digit
        printf("%d", digit);  // Print it
        number = number / 10; // Remove the last digit
    }

    printf("\n");
    return 0;
}
     // number = 123 -> digit = 3, print 3, number becomes 12
    // number = 12  -> digit = 2, print 2, number becomes 1
    // number = 1   -> digit = 1, print 1, number becomes 0
    // Output: 321
