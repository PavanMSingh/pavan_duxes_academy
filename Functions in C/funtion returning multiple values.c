#include <stdio.h>

void calculate(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int x, y, sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    calculate(x, y, &sum, &product);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
} //The function returns multiple results by storing them in variables through pointers.
  //sum and difference receive values through their addresses,
  //so one function provides multiple results.
