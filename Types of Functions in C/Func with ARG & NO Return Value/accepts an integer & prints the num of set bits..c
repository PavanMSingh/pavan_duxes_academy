#include <stdio.h> //with Arg & No return value
/* Function prototype */
void countSetBits(int number);

/* Function definition */
void countSetBits(int number) {
    int count = 0;

    while (number != 0) {          
        if (number % 2 == 1) {    
            count++;
        }

        number = number / 2;
    }

    printf("Number of set bits = %d", count);
}

int main(void) {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    /* Function call */
    countSetBits(number);

    return 0; //13 in binary is 1101. It has three 1s, so it has 3 set bits.
            //The function repeatedly checks the remainder after dividing by 2;
            //  a remainder of 1 means the current binary bit is set.
}