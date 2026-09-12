#include <stdio.h>
int reverseNumber(int n)
{
    int reverse = 0, digit;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return reverse;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = reverseNumber(number);

    printf("Reversed number = %d", result);

    return 0;
}