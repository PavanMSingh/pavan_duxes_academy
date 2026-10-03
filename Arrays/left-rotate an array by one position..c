#include <stdio.h>
int main() {
    int a[100], n, first;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    first = a[0]; // Save the first element before shifting.

    for (int i = 0; i < n - 1; i++) { // Shift each element one position to the left.
        a[i] = a[i + 1];
    }

    a[n - 1] = first;// Place the saved first element at the end.

    
    printf("After left rotation: ");// Print the rotated array.
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}/*Start:          1  2  3  4
Save first:     first = 1

Shift left:
a[0] = a[1]     2  2  3  4
a[1] = a[2]     2  3  3  4
a[2] = a[3]     2  3  4  4

Put first at end:
a[3] = first    2  3  4  1

Result:         2  3  4  1 */
