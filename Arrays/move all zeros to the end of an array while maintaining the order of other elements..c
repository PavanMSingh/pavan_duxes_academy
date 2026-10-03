#include <stdio.h>
int main() {
    int a[100], n, j = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) { // Copy non-zero numbers to the front, in their original order.
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }
    while (j < n) { // Fill all remaining places with zeros.
        a[j] = 0;
        j++;
    }
    for (int i = 0; i < n; i++) {     // Print the result.
        printf("%d ", a[i]);
    }
    return 0;
} /* Start:       1 0 4 0 3
j = 0
Read 1: non-zero → put it at a[0]
Array:       1 0 4 0 3
j = 1
Read 0: skip it
Read 4: non-zero → put it at a[1]
Array:       1 4 4 0 3
j = 2
Read 0: skip it
Read 3: non-zero → put it at a[2]
Array:       1 4 3 0 3
j = 3
Fill the remaining positions with zeros:
Array:       1 4 3 0 0
Result:      1 4 3 0 0 */