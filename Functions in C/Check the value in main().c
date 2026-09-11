#include <stdio.h>

void changeToZero(int *num) {
    *num = 0;
}

int main() {
    int number = 25;

    printf("Before function call: %d\n", number);

    changeToZero(&number);                     

    printf("After function call: %d\n", number);

    return 0;
}

   //&number passes the address of number and 
   //*num = 0 changes the original variable in main().