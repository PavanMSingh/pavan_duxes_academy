#include <stdio.h>
int main(void) {
    int arr[100];
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array in reverse order: ");
    
    // Start at the last element and print backward.
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
    /*
     * Input size = 4, so the array is:
     * Index:  0  1  2  3
     * Value:  4  9  2  7
     *
     * The loop starts at i = size - 1, which is 3.
     * i = 3: print arr[3] = 7
     * i = 2: print arr[2] = 2
     * i = 1: print arr[1] = 9
     * i = 0: print arr[0] = 4
     *
     * The loop stops after i becomes -1.
     * Output: 7 2 9 4
    */