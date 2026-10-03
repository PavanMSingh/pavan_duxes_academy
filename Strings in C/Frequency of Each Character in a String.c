#include <stdio.h>
int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Take one character at a time
    for (i = 0; str[i] != '\0'; i++) { //i chooses one character.
        count = 0;

        // Check the whole string for the same character
        for (j = 0; str[j] != '\0'; j++) { //j checks the entire string for that character.
            if (str[i] == str[j]) { 
                count++;
            }
        }
        
        printf("%c = %d\n", str[i], count);
    }
    return 0; //count stores how many matches are found.
}