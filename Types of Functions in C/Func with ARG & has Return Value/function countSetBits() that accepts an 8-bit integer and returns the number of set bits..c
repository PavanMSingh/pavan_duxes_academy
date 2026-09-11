#include <stdio.h> //With arg & return value
/* Function prototype */
int countSetBits(unsigned char number);
/* Function definition */
int countSetBits(unsigned char number) {
    int count = 0;

    while (number != 0) {
        if (number % 2 == 1) {
            count++;
        }

        number = number / 2;
    }
    return count;
}

int main(void) {
    unsigned char number;
    int result;

    printf("Enter an 8-bit integer (0 to 255): ");
    scanf("%hhu", &number); 

    result = countSetBits(number); /* Function call */

    printf("Number of set bits = %d", result);
    return 0;
} //13 in 8-bit binary is 00001101. It contains three 1s, so the function returns 3.