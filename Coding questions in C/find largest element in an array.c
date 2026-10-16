#include <stdio.h>

int main(void) {
    int arr[] = {4, 9, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];  // Assume the first element is largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    return 0;
}
          //i = 1: arr[1] = 9; 9 > 4, so largest becomes 9
         // i = 2: arr[2] = 2; 2 > 9 is false, largest stays 9
        // i = 3: arr[3] = 7; 7 > 9 is false, largest stays 9