#include <stdio.h>
int reverseNumber(int n) {
    int reverse = 0, digit;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return reverse;
}

int main() {
    int number, reversed;
    printf("Enter a number: ");
    scanf("%d", &number);

    reversed = reverseNumber(number);

    if (number == reversed)
        printf("%d is a palindrome number", number);
    else
        printf("%d is not a palindrome number", number);

    return 0;
}