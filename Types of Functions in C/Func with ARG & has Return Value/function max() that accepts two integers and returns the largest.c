#include <stdio.h>// with ARG & Return value

/* Function prototype */
int max(int a, int b);

/* Function definition */
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    int num1, num2, largest;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    /* Function call */
    largest = max(num1, num2);

    printf("Largest number = %d", largest);

    return 0;
}