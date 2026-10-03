#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        printf("Second-largest number is %d\n", a);
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        printf("Second-largest number is %d\n", b);
    } else {
        printf("Second-largest number is %d\n", c);
    }

    return 0;
}/*(8 >= 3 && 8 <= 5) || (8 <= 3 && 8 >= 5)
- 8 >= 3 is true, but 8 <= 5 is false, so the first part is false.
- 8 <= 3 is false, so the second part is false.
- Since the whole condition is false, it moves to the else if.
Now it checks b = 3. Neither condition is true, 
so it moves to the final else and prints c, which is 5:*/