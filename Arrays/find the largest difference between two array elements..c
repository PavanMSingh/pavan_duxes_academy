#include <stdio.h>
int main() {
    int a[100], n;
    int largest, smallest;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    largest = a[0];// Start with the first element as both the largest and smallest.
    smallest = a[0];

    // Find the largest and smallest values in the array.
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }
    // The largest difference is the largest value minus the smallest.
    printf("Largest difference: %d\n", largest - smallest);
    return 0;
} /*Start:
largest = 2
smallest = 2
Check 9:
9 > largest (2), so largest = 9
9 < smallest (2)? No
Check 4:
4 > largest (9)? No
4 < smallest (2)? No
Largest difference = largest - smallest
                   = 9 - 2
                   = 7 */