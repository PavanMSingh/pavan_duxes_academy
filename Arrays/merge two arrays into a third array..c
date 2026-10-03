#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n, m, i;
    printf("Enter size of first array: ");// Read the first array.
    scanf("%d", &n);
    printf("Enter its elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");// Read the second array.
    scanf("%d", &m);
    printf("Enter its elements: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {// Copy the first array into c.
        c[i] = a[i];
    }
    for (i = 0; i < m; i++) {// Copy the second array after the first.
        c[n + i] = b[i];
    }
    printf("Merged array: ");// Print the merged array.
    for (i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}// a = {1, 2}, b = {3, 4, 5}
    // Copy a: c = {1, 2}
    // Copy b after a: c = {1, 2, 3, 4, 5}
    // The merged array has n + m elements.
