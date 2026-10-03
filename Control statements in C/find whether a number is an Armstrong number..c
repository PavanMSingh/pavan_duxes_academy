#include <stdio.h>
int main(void)
{
    int number, original, digit;
    int sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    original = number; // Save the number for the final comparison
    // Get each digit, cube it, and add it to sum
    while (number > 0) {
        digit = number % 10;                 // Get the last digit
        sum = sum + digit * digit * digit;  // Add the digit's cube
        number = number / 10;                // Remove the last digit
    }

    // Check whether the sum is equal to the original number
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}//First: digit = 153 % 10 = 3; sum = 0 + 3*3*3 = 27; number = 153 / 10 = 15
    // Next:  digit = 15 % 10 = 5;  sum = 27 + 5*5*5 = 152; number = 15 / 10 = 1
    // Next:  digit = 1 % 10 = 1;   sum = 152 + 1*1*1 = 153; number = 1 / 10 = 0
    // Now sum (153) equals original (153), so 153 is an Armstrong number.
