#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }
    while (pos < n) {
        arr[pos] = 0;
        pos++;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array : ");
    printArray(arr, n);

    moveZeroesToEnd(arr, n);

    printf("After moving   : ");
    printArray(arr, n);

    return 0;
}