#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = sumOfDigits(number);

    printf("Sum of digits = %d", result);

    return 0;
}