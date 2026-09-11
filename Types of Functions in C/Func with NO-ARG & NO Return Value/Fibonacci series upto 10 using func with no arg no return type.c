#include <stdio.h>
void fibonacci(void);

void fibonacci(void) {
    int a = 0, b = 1, next;

    printf("Fibonacci series: ");

    for (int i = 1; i <= 10; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main(void) {
    fibonacci();
    return 0;
}
// NO arguments - No Return Type Function

//Function prototype: void fibonacci(void);
//Function definition: uses void and prints directly
//Function call: fibonacci();