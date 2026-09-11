#include <stdio.h> //Function with NO-ARG & No Return

void tableOfSeven(void);  /* Function prototype */

/* Function definition */
void tableOfSeven(void) {
    for (int i = 1; i <= 10; i++) {
        printf("7 x %d = %d\n", i, 7 * i);
    }
}

int main(void) {
    /* Function call */
    tableOfSeven();

    return 0;
}