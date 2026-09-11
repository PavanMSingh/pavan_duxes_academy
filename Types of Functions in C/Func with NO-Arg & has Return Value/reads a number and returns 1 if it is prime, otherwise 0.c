#include <stdio.h> // no arg & has return value
int checkPrime(void);
int checkPrime(void) {// func def
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2) {
        return 0;
    }

    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }                           
    return 1;
}
int main(void) {
    int result;
    /* Function call */
    result = checkPrime();

    if (result == 1) {
        printf("Prime number"); 
    } else {
        printf("Not a prime number");
    }
    return 0;
}