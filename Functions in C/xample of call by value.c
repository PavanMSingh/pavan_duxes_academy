#include<stdio.h>
void test(int x) {
    x = 50;
}

int main() {
    int a = 10;

    test(a);
    printf("%d", a);

    return 0;
}  //test(a) uses call by value. A copy of a is stored in x,
  //so changing x to 50 does not change the original variable a