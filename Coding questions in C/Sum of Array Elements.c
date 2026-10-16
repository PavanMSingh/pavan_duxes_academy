#include <stdio.h>
int main(void) {
    int arr[100];
    int size;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i++) { // Add each element to sum.
        sum = sum + arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    return 0;
}
     /*
     * for input: 4 9 2 7
     * Start: sum = 0
     * Add 4: sum = 0 + 4 = 4
     * Add 9: sum = 4 + 9 = 13
     * Add 2: sum = 13 + 2 = 15
     * Add 7: sum = 15 + 7 = 22
     * Final sum = 22
     */