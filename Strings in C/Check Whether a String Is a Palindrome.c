#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter a word: ");
    scanf("%99s", str);

    // Move j to the last character
    while (str[j] != '\0') {
        j++;
    }
    j--;

    // Compare first and last characters
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not a palindrome");
            return 0;
        }

        i++;
        j--;
    }

    printf("Palindrome");
    return 0;
}