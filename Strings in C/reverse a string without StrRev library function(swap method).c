#include <stdio.h>

int main() {
    char str[] = "Pavan";
    int i, length = 0;
    char temp;

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string   // this method actually swaps in memory
    for (i = 0; i < length / 2; i++) { //str[i] starts from the beginning.
        temp = str[i];   //str[length - 1 - i] starts from the end.
        str[i] = str[length - 1 - i]; //temp temporarily holds one character while they are swapped.
        str[length - 1 - i] = temp; // length / 2 means stop after reaching the middle.
    }

    printf("%s", str);

    return 0;
}
