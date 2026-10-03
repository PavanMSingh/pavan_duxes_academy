#include <stdio.h>
int main() {
    int a[100], n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the numbers: "); // Read the n - 1 numbers.
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
    }

    // Check each number from 1 to n.
    for (int number = 1; number <= n; number++) {
        int found = 0;

        // Search for this number in the array.
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == number) {
                found = 1;
                break;
            }
        }

        // If it isn't in the array, it is missing.
        if (found == 0) {
            printf("Missing number: %d\n", number);
            break;
        }
    }

    return 0;
}
/*number = 1 → found in a → continue
number = 2 → found in a → continue
number = 3 → not found in a → print "Missing number: 3" and stop */
