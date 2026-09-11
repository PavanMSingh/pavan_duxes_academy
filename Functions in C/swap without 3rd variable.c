#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
                                               //int x = 10, y = 20;

                                              //     x = x + y;                       
                                             //      y = x - y;                           
                                            //      x = x - y;
int main() {
    int x = 10, y = 20;

    swap(&x, &y);

    printf("x = %d, y = %d", x, y);

    return 0;
}

    

   