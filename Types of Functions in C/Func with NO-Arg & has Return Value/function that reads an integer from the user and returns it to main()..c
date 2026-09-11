#include <stdio.h> // NO Arg & Return Value

/* Function prototype */
int readNumber(void);

/* Function definition */
int readNumber(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    return number;
}

int main(void) {
    int number;

    /* Function call */
    number = readNumber();

    printf("You entered: %d", number);

    return 0;
}//readNumber() does not receive any argument. It reads the value using scanf() and 
//sends it back using return number;. 
//main() stores that returned value in number.