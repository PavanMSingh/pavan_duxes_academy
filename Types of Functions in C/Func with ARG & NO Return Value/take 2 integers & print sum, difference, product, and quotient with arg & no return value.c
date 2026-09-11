#include <stdio.h> /* Arg but no return value 
                   
/* Function prototype */
void calculate(int a, int b);

/* Function definition */
void calculate(int a, int b) {
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0) {
        printf("Quotient = %d\n", a / b);
    } else {
        printf("Quotient is not possible because divisor is 0.\n");
    }
}/*The function receives num1 and num2 as arguments,
performs the calculations, and prints the results directly
so it has arguments but no return value.*/

int main(void) {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    /* Function call */
    calculate(num1, num2);

    return 0;
}