#include <stdio.h>
int main() {
    int a[100], n, temp;
    printf("Enter number of elements: "); // Read the number of elements.
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);// Read the array elements.
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) { // Compare neighboring numbers.
        for (int j = 0; j < n - 1; j++) { // Swap them if the left number is smaller.
            if (a[j] < a[j + 1]) {  // This moves larger numbers toward the beginning.
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Descending order: ");// Print the array in descending order.
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
/*Start: 5 2 8 1
Pass 1:
5 < 2? No  → 5 2 8 1
2 < 8? Yes → 5 8 2 1
2 < 1? No  → 5 8 2 1
Pass 2:
5 < 8? Yes → 8 5 2 1
5 < 2? No  → 8 5 2 1
2 < 1? No  → 8 5 2 1
Pass 3:
8 < 5? No  → 8 5 2 1
5 < 2? No  → 8 5 2 1
2 < 1? No  → 8 5 2 1
Descending order: 8 5 2 1 */