#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // Keep dividing by 2 while the number is even
    while (number > 1 && number % 2 == 0) {
        number = number / 2;
    }
    // A power of 2 ends at 1
    if (number == 1) {
        printf("It is a power of 2\n");
    } else {
        printf("It is not a power of 2\n");
    }
    return 0;
}
 //  for 8:
    // 8 is divisible by 2, so divide it: 8 / 2 = 4
    // 4 is divisible by 2, so divide it: 4 / 2 = 2
    // 2 is divisible by 2, so divide it: 2 / 2 = 1
    // The result is 1, so 8 is a power of 2.
