#include <stdio.h>
int main(void) {
    char original[] = "PAVAN";
    char copy[100];
    int i = 0;
    // Copy characters one by one until the string ends at '\0'.
    while (original[i] != '\0') {
        copy[i] = original[i];
        i++;
    }

    // Add '\0' so copy is recognized as a complete string.
    copy[i] = '\0';
    printf("Copied string: %s\n", copy);

    return 0;
}
/*
     * "PAVAN":
     * i = 0: copy 'P'       -> copy is "P"
     * i = 1: copy 'A'       -> copy is "PA"
     * i = 2: copy 'V'       -> copy is "PAV"
     * i = 3: copy 'A'       -> copy is "PAVA"
     * i = 4: copy 'N'       -> copy is "PAVAN"
     * i = 5: original[i] is '\0', so the loop stops.
     *         copy[5] = '\0' marks the end of the copied string.
     */