#include <stdio.h>

int main() {
    char str[] = "Pavan";
    int length = 0;

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    // Print in reverse
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
