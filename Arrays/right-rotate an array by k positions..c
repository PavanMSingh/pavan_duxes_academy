#include <stdio.h>
int main() {
    int a[100], n, k, last;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for (int r = 0; r < k; r++) { // Rotate right one position, k times.
        last = a[n - 1];  // Save the last element.
        
        for (int i = n - 1; i > 0; i--) { // Move each element one place to the right.
            a[i] = a[i - 1];
        }

        a[0] = last;  // Put the last element at the beginning.
    }
    for (int i = 0; i < n; i++) { // Print the rotated array.
        printf("%d ", a[i]);
    }

    return 0;
} /*Rotation 1:
Save last element: 4
Shift right:       1 1 2 3
Put 4 at front:    4 1 2 3
Rotation 2:
Save last element: 3
Shift right:       4 4 1 2
Put 3 at front:    3 4 1 2
Result: 3 4 1 2