#include <stdio.h>
int main() {
    int a[100], n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);// Read the number of elements.
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) { // Read the array elements.
        scanf("%d", &a[i]);
    }
    // Bubble sort: compare neighbors and swap if out of order.
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: "); // Print the sorted array.
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
// Pass 1:
    // Compare 5, 2 -> swap: 2 5 8 1
    // Compare 5, 8 -> keep: 2 5 8 1
    // Compare 8, 1 -> swap: 2 5 1 8
    //
    // Pass 2:
    // Compare 2, 5 -> keep: 2 5 1 8
    // Compare 5, 1 -> swap: 2 1 5 8
    //
    // Pass 3:
    // Compare 2, 1 -> swap: 1 2 5 8
    // Sorted: 1 2 5 8