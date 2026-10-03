#include <stdio.h>
int main(void)
{
    int number, original, digit;
    int factorial, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number; // Save the number for the final comparison
    
    // Get each digit and find its factorial
    while (number > 0) {
        digit = number % 10; // Get the last digit

        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial = factorial * i; // Calculate the digit's factorial
        }

        sum = sum + factorial; // Add the factorial to sum
        number = number / 10;  // Remove the last digit
    }

    if (sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
} // 1! = 1, 4! = 24, 5! = 120
    // Sum = 1 + 24 + 120 = 145
