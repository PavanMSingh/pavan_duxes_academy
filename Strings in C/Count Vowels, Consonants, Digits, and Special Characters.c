#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);  // Read the full string, including spaces

    // Check every character until the string ends
    while (str[i] != '\0') {
        char ch = str[i];

        // Check whether the character is a letter
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            // If the letter is a, e, i, o, or u, count it as a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            }
            // Any other letter is a consonant
            else {
                consonants++;
            }
        }

        // Check whether the character is a number from 0 to 9
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }

        // Spaces and symbols such as !, @, # are special characters
        else {
            special++;
        }

        i++;  // Move to the next character
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}