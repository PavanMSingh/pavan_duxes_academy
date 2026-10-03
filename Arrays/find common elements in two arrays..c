#include <stdio.h>
int main() {
    int a[100], b[100];
    int n, m, i, j;
    printf("Enter size of first array: "); // Read the first array.
    scanf("%d", &n);
    printf("Enter its elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: "); // Read the second array.
    scanf("%d", &m);
    
    printf("Enter its elements: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common elements: ");

    // Check each element of the first array against the second.
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]); //The inner loop searches the second array.
                                       //When it finds a match, break stops that search and  
                                       //moves on to the next element in the first array.
                break; // Stop so this element is printed only once per match in a.
            }
        }
    }

    return 0;
}/*Check 2: compare with 1, 4, 8 → no match
Check 4: compare with 1, 4    → match; print 4
Check 6: compare with 1, 4, 8 → no match
Check 8: compare with 1, 4, 8 → match; print 8 */ 
