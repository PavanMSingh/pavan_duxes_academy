#include <stdio.h>
int main(void) {
    char str[] = "Pavan @ Duxes";
    int length = 0;

    // Count each character until '\0', which marks the end of the string.
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}

/*
     * run:
     * The string has these characters:
     * P a v a n [space] @ [space] D u x e s
     *
     * Each loop checks one character and increases length by 1.
     * Spaces and symbols count as characters too.
     * After counting all 13 characters, str[length] is '\0',
     * so the loop stops. length = 13.
     */