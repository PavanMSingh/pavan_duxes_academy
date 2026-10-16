#include <stdio.h>
int main(void) {
    int arr[100],size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array without duplicates: ");

    for (int i = 0; i < size; i++) {
        int repeated = 0;

        for (int j = 0; j < i; j++) { // Check whether this value appeared earlier.
            if (arr[i] == arr[j]) {
                repeated = 1;
                break;
            }
        }
        if (repeated == 0) { // Print only values that appeared for the first time.
            printf("%d ", arr[i]);
        }
        /*
          for input: 4 2 4 7 2
         * i = 0: 4 has not appeared before, so print 4.
         * i = 1: 2 has not appeared before, so print 2.
         * i = 2: 4 appeared at index 0, so skip it.
         * i = 3: 7 has not appeared before, so print 7.
         * i = 4: 2 appeared at index 1, so skip it.
         * Output: 4 2 7
         */
    }
    return 0;
}