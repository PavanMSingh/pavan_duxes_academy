#include <stdio.h>
int main(void)
{
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    // Ignore a negative sign
    if (number < 0) {
        number = -number;
    }
    // Look at digits from right to left until a non-zero digit is found
    while (number > 0) {
        digit = number % 10; // Get the rightmost digit

        if (digit != 0) {
            break; // This is the first non-zero digit from the right
        }

        number = number / 10; // Remove the rightmost zero
    }

    
    if (number == 0) {
        printf("There is no non-zero digit.\n");
    } else {
        printf("First non-zero digit from the right is %d\n", digit);
    }
    return 0;
}
//  for 1200:
    // 1200 % 10 = 0, remove it: number becomes 120
    // 120 % 10 = 0, remove it: number becomes 12
    // 12 % 10 = 2, so the answer is 2
    //
    // for 5070:
    // 5070 % 10 = 0, remove it: number becomes 507
    // 507 % 10 = 7, so the answer is 7
