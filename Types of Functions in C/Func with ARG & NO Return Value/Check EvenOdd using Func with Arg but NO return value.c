#include <stdio.h> //Function with Argument- NO Return Value

/* Function prototype */
void checkEvenOdd(int number);

/* Function definition */
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is Even", number);
    } else {
        printf("%d is Odd", number);
    }
}

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    /* Function call */
    checkEvenOdd(number);

    return 0;
}