#include <stdio.h>
int main(void) {
    int arr[100];
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d different numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++) { // Sort the array from smallest to largest.
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Second largest: %d\n", arr[size - 2]);
    return 0;
}
/*
        for input: 4 9 2 7
     * Starting array: 4 9 2 7
     *
     * i = 0: compare 4 with 9, 2, and 7.
     *        Swap 4 and 2 -> 2 9 4 7
     * i = 1: compare 9 with 4 and 7.
     *        Swap 9 and 4, then 9 and 7 -> 2 4 7 9
     * i = 2: compare 7 with 9. No swap.
     *
     * Sorted array: 2 4 7 9
     * arr[size - 2] is arr[2], which is 7.
     */