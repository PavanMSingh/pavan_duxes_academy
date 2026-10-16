#include <stdio.h>
int main(void) {
    char str[] = "PAVAN";
    int length = 0;
    // Count characters until '\0', the string-ending character.
    while (str[length] != '\0') {
        length++;
    }
    /*
     * run of the while loop:
     * str[0] = 'P' -> length becomes 1
     * str[1] = 'A' -> length becomes 2
     * str[2] = 'V' -> length becomes 3
     * str[3] = 'A' -> length becomes 4
     * str[4] = 'N' -> length becomes 5
     * str[5] = '\0' -> stop; length is 5
     */

    // Print from the last character back to the first.
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    /*
     * run of the for loop:
     * i = 4 -> print 'N'
     * i = 3 -> print 'A'
     * i = 2 -> print 'V'
     * i = 1 -> print 'A'
     * i = 0 -> print 'P'
     *
     * Output: navaP
     */

    return 0;
}