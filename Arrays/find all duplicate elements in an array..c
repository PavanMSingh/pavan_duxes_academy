#include <stdio.h>
int main() {
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Compare each number with the numbers after it.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
} /* i = 0, a[i] = 4
  Compare with 2 → different
  Compare with 4 → same; print 4

i = 1, a[i] = 2
  Compare with 4 → different
  Compare with 5 → different
  Compare with 2 → same; print 2

i = 2, a[i] = 4
  Compare with 5 → different
  Compare with 2 → different

i = 3, a[i] = 5
  Compare with 2 → different hence prints 4 2 */
